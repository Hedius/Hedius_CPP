#include "Bank.h"
#include <sstream>
using namespace std;

Bank::Bank(string name)
{
	name_ = name;
}

string Bank::toString()const
{
	ostringstream os;
	vector<Account*>::const_iterator it;

	os << "\nBANK" << name_ << endl;

	/*  for(int i=0; i<accounts_.size();i++){
	os << accounts_[i] -> toString() << endl;
	}*/

	/*  for(it=accounts_.begin(); it!=accounts_.end();it++){
	os << (*it) -> toString() << endl;
	}*/

	for (auto paccount : accounts_) {
		os << paccount->toString() << endl;
	}

	return os.str();
}

void Bank::addAccount(Account& account)
{
	accounts_.push_back(&account);
}

void Bank::delAccount(Account& account)
{
	vector<Account*>::iterator it;
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		if ((*it) == &account) {
			accounts_.erase(it);
			return;
		}
	}
}

void Bank::charges(double d)
{
	vector<Account*>::const_iterator it;

	for (it = accounts_.begin(); it != accounts_.end();it++) {
		double newValue = (*it)->getAmount() - d;
		(*it)->setAmount(newValue);
	}
}

void Bank::addInterest(double d)
{
	vector<Account*>::const_iterator it;

	for (it = accounts_.begin(); it != accounts_.end();it++) {
		double newValue = (*it)->getAmount() + d;
		(*it)->setAmount(newValue);
	}
}



