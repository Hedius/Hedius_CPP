#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;
class Account
{
public:
	Account(string name, double d);
	string toString()const;
	double getAmount()const { return amount_; }
	void setAmount(double d) { amount_ = d; }

private:
	static int nextNumber;

	string owner_;
	int number_;
	double amount_;

};

#endif // ACCOUNT_H
