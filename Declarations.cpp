#include "BankAccountClass.h"

//userID is the cin input when asked for an account ID
//userPass is the cin input when asked for a password

BankAccount::BankAccount(string userID, string userPass, double initialBalance) {
	if (initialBalance < 0)
		balance = 0.0;
	else
		balance = initialBalance;
	accountNumber = userID;
	password = userPass;
}

bool BankAccount::deposit(double amount) {
	if (amount <= 0) //prevents depositing a negative amount or zero dollars
		return false;
	else
		balance += amount;
	return true;
}

bool BankAccount::withdraw(double amount) {
	if (amount <= 0 || amount > balance)
		return false;

	balance -= amount;
	return true;
}

bool BankAccount::setPassword(string oldPass, string newPass) {
	if (oldPass != password)
		return false;

	password = newPass;
	return true;

}
//accessor
double BankAccount::getBalance() const {
	return balance;
}

bool BankAccount::verifyPassword(string userPass) const {
	return password == userPass;

}
string BankAccount::getAccountNumber() const {
	return accountNumber;

}
