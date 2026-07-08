## Rework of a CS-1 Coding Project

In my first semester of C++, we had to make a bank account app with user verification and some commands. In CS2 Data Structures, we learned how to separate files to subdivide tasks, link them together and the class data structure. 

I thought I would retry this app with the new C++ features I've learned:
- header file BankAccountClass.h with a class BankAccount
- Declarations.cpp that define the member functions 
- userInput.cpp for password verification to login and access member functions
- main file Bank Account App to run functions, initialize database (accounts) and create the switch menu for user features

The user must verify their password and then can choose to deposit, withdraw, get the balance, and set their password.
For testing, there are only three accounts: 
    - BankAccount("0012", "1234", 500),
	- BankAccount("0050", "2134", 1000),
	- BankAccount("0001", "1111", 25)
    
The first parameter is their account number, the second is their password, and third is the account balance. 


## Work in Progress features...

-The switch menu is in the main function, and I would like to add it to it's own .cpp for better organization.

