//acquires password and command request
#include <iostream>
#include <string>
#include "BankAccountClass.h"
using namespace std;

void passwordLogin(vector<BankAccount> account) {
	
	int username;
	int data; //to cin password
	cout << "Welcome to the bank. Enter username to access your account: " << endl;
	cin >> user;

	//check for username

	BankAccount* matchedAccount = nullptr;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].getUsername() == username) {
            matchedAccount = &accounts[i];
            break;
        }
    }
	 if (matchedAccount == nullptr) {
        cout << "No account found with that username." << endl;
        return nullptr;
    }

	cin.ignore();
	cout << "Enter password: " << endl;
	cin >> data;

}
