#include <iostream>
using namespace std;

#include "Bank.h"
#include "Account.h"

int main()
{

	Bank myB(" Derler Unlimited");

	Account a1("Derlmann", 100000.0);
	Account a2("Mangelberger", 12000.0);
	Account a3("Lenzi", 11000.0);

	myB.addAccount(a1);
	myB.addAccount(a2);
	myB.addAccount(a3);

	cout << "The Bank: BEFORE calculating the charges *********" << endl;
	cout << myB.toString() << endl;

	myB.charges(10.0);
	cout << "The Bank: AFTER calculating the charges *********" << endl;
	cout << myB.toString() << endl;

	myB.addInterest(1.0);
	cout << "The Bank: AFTER adding the interest *********" << endl;
	cout << myB.toString() << endl;

	myB.delAccount(a3);
	cout << "The Bank: AFTER deleting a3 (Gamma Hofmann) *********" << endl;
	cout << myB.toString() << endl << endl;

	return 0;
}

/*Account:
Create a class Account with the following structure.
Member:
int m_number;
string m_owner;
double m_amount;
Methods (consider the parameters and return values):
Constructor / Destructor
Getter and setter methods
toString()
withdraw()
deposit()

Write a short program for testing the class.

Bank:
Write a class Bank and add Account as class member:
string m_name;
Account* m_accounts;

Methods (consider the parameters and return values):
Constructor / Destructor
Getter and setter methods
toString()
addAccount(), delAccount()
addInterest()
charges()       */
