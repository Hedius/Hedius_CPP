#pragma once
#include <string>
#include <vector>
#include "account.h"
using namespace std;

class Bank {
private:
	string name_;
	vector<Account*> accounts_;

public:
	Bank(string name);

	~Bank();

	//!!!!!!!!!!!!!!
	int addAccount(string owner, double d);
	void delAccount(string owner);
	Account& getAccount(int nr);

	Account& getMaxAccount();
	double getAverageAmount();
	double getStandardDeviation();
	void delAccount(double d);

	void addAccount(Account& account);
	void delAccount(Account& account);

	void charges(double d);
	void addInterest(double d);

	string toString() const;
};