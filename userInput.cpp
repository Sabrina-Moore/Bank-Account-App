//acquires ID and password and verifies password
#include <iostream>
#include <string>
#include <vector>
#include "BankAccountClass.h"
using namespace std;


BankAccount* passwordLogin(vector<BankAccount>& ba) { //pass by reference to prevent dangling pointer

	int inputID;
	int inputPassword;
	const int MAXATTEMPT = 6; //give the user 5 tries


	//implement two loops here if the user gets their input wrong
	cout << "Welcome to the bank. Please enter your account ID: " << endl;
	cin >> inputID;

	cout << "Enter password to access your account : " << endl;
	cin >> inputPassword;

		//search through users
		for (auto& acc : ba) {
			if (acc.getAccountNumber() == inputID && acc.verifyPassword(inputPassword)) {
				cout << "You are logged in." << endl;
				return &acc; //return pointer to account
			}
		}
	cout << "Invalid ID or password." << endl;
	return nullptr;
}
