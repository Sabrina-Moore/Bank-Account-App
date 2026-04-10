// CSCI 2 Programming challenge Bank account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Create a class that lets the owner deposit and withdraw money protected by a password 

#include <iostream>
#include <string>
#include <vector>
#include "BankAccountClass.h"

using namespace std;


//declarations
BankAccount* passwordLogin(vector<BankAccount>& ba);



int main()
{

	//account setup 
	vector<BankAccount> ba = {
		BankAccount(1, 4832, 500.00),
		BankAccount(2, 9827, 320.12),
		BankAccount(3, 1285, 0.0)
	};

	//validate user
	BankAccount* user = passwordLogin(ba); //fix

	//Implement this logic as it's own function
	if (user != nullptr) {
		//show menu of options
		int choice; //switch menu

		do { //runs at least once without a preset number of iterations
			cout << "1. View Balance.\n";
			cout << "2. Deposit.\n";
			cout << "3. Withdraw.\n";
			cout << "4. Change password.\n";
			cout << "5. Logout.\n";
			cin >> choice;

			switch (choice) {
			case 1: {
				cout << "Balance: $" << user->getBalance() << endl;
				break;
			}
			case 2: {
				cout << "Enter deposit amount: ";
				double amount;
				cin >> amount;
				if (user->deposit(amount)) { //check if deposit happened
					cout << "$" << amount << " was deposited.\n";
				}
				else {
					cout << "Deposit failed.\n";
				}
				cout << "Balance: $" << user->getBalance() << endl;
				break;
			}
			case 3: {
				cout << "Enter withdrawal amount: ";
				double amount;
				cin >> amount;
				if (user->withdraw(amount)) {
					cout << "$" << amount << " was withdrawn.\n";
				}
				else
					cout << "Withdrawal failed.\n";
				cout << "Balance: $" << user->getBalance() << endl;
				break;
			}
			case 4: {
				int oldPass;
				int newPass;

				cout << "Enter current password: ";
				cin >> oldPass;
				cout << endl;
				cout << "Enter new password: ";
				cin >> newPass;

				if (user->setPassword(oldPass, newPass)) {
					cout << "Password updated." << endl;
				}
				else {
					cout << "Invalid. Password not changed." << endl;
				}
				break;
			}
			case 5: {
				cout << "Logging out...\n";
				break;
			}
			default: {
				cout << "Invalid option.\n";
				break;
			}

			} //closes switch
		} while (choice != 5); //closes do while
	} //closes if statement



	//test

		//BankAccount ba(500, 1234); //sets account to $500, password 1234

		// BankAccount ba(500, 1234); //$500, password 1234
		//cout << "$" << ba.getBalance(1234) << endl;
		//cout << "$" << ba.getBalance(2345) << endl;
}
