#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;
class Account
{
	//!!!!!!!!!!!!!!!
	friend class Bank; // Bank darf Klasse verwenden
public:
	~Account() { cout << "Account Destructor called...." << endl;}
	void deposit(double d){
		setAmount(getAmount() + d);
	}
	string toString()const;
	double getAmount()const { return amount_; }
	void setAmount(double d) { amount_ = d; }

private:
	static int nextNumber;
	string owner_;
	int number_;	
	double amount_;

	//!!!!!!! STatic Private
	Account(string name, double d);
};

#endif // ACCOUNT_H
