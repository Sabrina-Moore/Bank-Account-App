//acquires password and command request
#include <iostream>
#include <string>
#include <vector>
#include "BankAccountClass.h"
using namespace std;

BankAccount* passwordLogin(vector<BankAccount>& accounts) {

    string username;
    string password; //to cin password
    cout << "Welcome to the bank. Enter username to access your account: " << endl;
    cin >> username;

    //check for username
    BankAccount* matchedAccount = nullptr;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].getAccountNumber() == username) {
            matchedAccount = &accounts[i];
            break;
        }
    }
    if (matchedAccount == nullptr) {
        cout << "No account found with that username." << endl;
        return nullptr;
    }

    //check for password
    cin.ignore();
    cout << "Enter password: " << endl;
    cin >> password;

    if (matchedAccount->verifyPassword(password)) {
        cout << "Access granted." << endl;
        return matchedAccount;
    }
    else {
        cout << "Incorrect password. Access denied." << endl;
        return nullptr;
    }
}
