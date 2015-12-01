#pragma once

#include <iostream>
#include <string>
using namespace std;


class Account {
	//!!!!!!!!!!!!!!
	friend class Bank;

private:
	//!!!!!!!!!!
	static int nextNumber;

	string owner_;
	int number_;
	double amount_;

	//!!!!!!!
	Account(string name, double d);

public:

	~Account() { cout << "Account-Destructor called ..." << endl; }

	void deposit(double d) { setAmount(getAmount() + d); }

	double getAmount() const { return amount_; }
	void setAmount(double d) { amount_ = d; }

	string toString() const;


};