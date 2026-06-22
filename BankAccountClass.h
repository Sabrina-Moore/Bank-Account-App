
#include <iostream>
#include <string>
using namespace std;

#ifndef BANKACCOUNTCLASS_H
#define BANKACCOUNTCLASS_H

class BankAccount {
public:
	BankAccount(string userID, string userPass, double initialBalance); //constructor
	bool deposit(double amount);
	bool withdraw(double amount);
	bool setPassword(string oldPass, string newPass);

	double getBalance() const;
	string getAccountNumber() const;

	bool verifyPassword(string userPass) const;

private:
	double balance;
	string password;
	string accountNumber; //unique number ID //one day make an account number generator?
};


#endif // !BANKACCOUNTCLASS.H#pragma once
