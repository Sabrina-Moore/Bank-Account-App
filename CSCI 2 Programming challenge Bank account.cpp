// CSCI 2 Programming challenge Bank account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Create a class that lets the owner deposit and withdraw money protected by a password 

#include <iostream>
#include <string>
#include "BankAccountClass.h"

using namespace std;

//guard files

//declarations
void passwordLogin(int password);


int main()
{

	//account setup 
	BankAccount ba(500, 1234); //sets account to $500, password 1234

	//passwordLogin(password);


	//test
	// BankAccount ba(500, 1234); //$500, password 1234
	//cout << "$" << ba.getBalance(1234) << endl;
	//cout << "$" << ba.getBalance(2345) << endl;
}
