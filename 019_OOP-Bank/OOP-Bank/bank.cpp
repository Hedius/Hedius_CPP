
#include "bank.h"
#include <sstream>

Bank::Bank(string name) {
	name_ = name;
}

/*Bank::~Bank() {
	for (int i = 1; i < accounts_.size()-1; i++) {
		delete accounts_[i]; // LOL XD ROFL
	
	}
}*/

string Bank::toString() const {
	ostringstream os;

	os << "\nBANK: " << name_ << endl;

	for (int i = 0; i < accounts_.size(); i++)
		os << accounts_[i]->toString() << endl;

	/* for(account* paccount : accounts_)
	os << paccount -> toString() << endl;
	*/

	return os.str();
}

void Bank::charges(double d) {
	vector<Account*>::const_iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
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
void Bank::addAccount(Account& account) {
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




