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
	string toString()const;
	void addAccount(Account& account);
	void charges(double d);
	void addInterest(double d);
	void delAccount(Account& account);


private:
	string name_;
	vector<Account*> accounts_;

};

#endif // BANK_CPP_H
