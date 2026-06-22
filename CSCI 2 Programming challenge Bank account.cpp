// Bank Account App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Create a class that lets the owner deposit and withdraw money protected by a password 

#include <iostream>
#include <string>
#include <vector>
#include "BankAccountClass.h"

using namespace std;

//guard files

//declarations
BankAccount* passwordLogin(vector<BankAccount>& accounts);


int main()
{
	vector<BankAccount> accounts = {
		BankAccount("0012", "1234", 500),
		BankAccount("0050", "2134", 1000),
		BankAccount("0001", "1111", 25)
			};


	BankAccount* loggedInAccount = passwordLogin(accounts);

	//if (loggedInAccount != nullptr) {
	//	cout << "Your balance is: $" << loggedInAccount->getBalance() << endl;
	//}
	
	int choice = -1;
	while (choice != 5) {

		cout << "What can we help you with today?" << endl;
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. Get balance" << endl;
		cout << "4. Set a new password" << endl;
		cout << "5. Close the application" << endl;
		cin >> choice;

		switch (choice) {
		case 1: {
			double amount;
			cout << "Enter deposit amount: ";
			cin >> amount;
			if (loggedInAccount->deposit(amount))
				cout << "Deposit successful." << endl;
			else
				cout << "Deposit failed. Check deposit amount." << endl;
			break;
		}
		case 2: {
			double amount;
			cout << "Enter withdrawal amount: ";
			cin >> amount;
			if (loggedInAccount->withdraw(amount))
				cout << "Withdrawal successful." << endl;
			else
				cout << "Withdrawal failed. Check withdrawal amount and balance." << endl;
			break;
		}
		case 3: {
			cout << "Your balance is: $" << loggedInAccount->getBalance() << endl;
			break;
		}
		case 4: {
			string oldPass, newPass, confirmPass;
			cout << "Enter current password: ";
			cin >> oldPass;
			cout << "Enter new password: ";
			cin >> newPass;
			cout << "Confirm new password: ";
			cin >> confirmPass;
			if (newPass == confirmPass) {
				if (loggedInAccount->setPassword(oldPass, newPass))
					cout << "Password updated." << endl;
				else
					cout << "Incorrect current password. Password not changed." << endl;
				break;
			}
			else {
				cout << "New password and confirmation do not match. Password not changed. " << endl;
				break;
			}
		}
		case 5: {
			cout << "Thank you for banking with us. Exiting program..." << endl;
			break;
		}
		default:
			cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
			break;
		}
	}
	

}
