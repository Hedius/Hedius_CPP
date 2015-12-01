#ifndef BANK_H
#define BANK_H
#include <string>
#include <vector>
#include "Account.h"
using namespace std;
class Bank
{
public:
	Bank(string name);
	~Bank();
	int addAccount(string owner, double d);

	string toString()const;
	void addAccount(Account& account);
	void charges(double d);
	void addInterest(double d);
	void delAccount(string owner);
	void delAccount(Account& account);
	Account& getAccount(int number);
	Account& getMaxAccount();
	double getStandardDeviation();
	double getAverageAmount();

private:
	string name_;
	vector<Account*> accounts_;

};

#endif // BANK_CPP_H

