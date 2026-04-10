
#include <iostream>
#include <string>
using namespace std;

#ifndef BANKACCOUNTCLASS_H
#define BANKACCOUNTCLASS_H

struct BankAccount {
public:
	BankAccount(int userID, int userPass, double initialBalance); //constructor
	bool deposit(double amount);
	bool withdraw(double amount);
	bool setPassword(int oldPass, int newPass);

	double getBalance() const;
	int getAccountNumber() const;

	bool verifyPassword(int userPass) const;

private:
	double balance;
	int password;
	int accountNumber; //unique number ID //one day make an account number generator?
};


#endif // !BANKACCOUNTCLASS.H
