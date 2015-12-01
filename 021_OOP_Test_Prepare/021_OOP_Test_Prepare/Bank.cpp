#include "bank.h"
#include "account.h"
#include <sstream>
#include <cmath>

Bank::Bank(string name) {

	name_ = name;
}

Bank::~Bank() {

	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {

		delete *it;

	}

}

Account& Bank::getAccount(int nr) {

	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
		if (nr == (*it)->number_) {

			return **it;

		}
	}

}


int Bank::addAccount(string owner, double d) {

	Account* p = new Account(owner, d);

	accounts_.push_back(p);

	return p->number_;
}


void Bank::addAccount(Account& account) {

	accounts_.push_back(&account);


}

void Bank::delAccount(string owner) {

	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
		if (owner == (*it)->owner_) {

			//!!!!!!!!
			delete *it;

			accounts_.erase(it);
			return;
		}
	}


}

void Bank::delAccount(Account& account) {
	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
		if ((*it) == &account) {
			accounts_.erase(it);
			return;
		}
	}
}

void Bank::delAccount(double d) {

	vector<Account*>::iterator it;

	int i;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {

		if ((*it)->getAmount() < d) {

			delete *it;

			accounts_.erase(it);
			it--; // !!!!!!!!!! after erase it-- (decrement) nötig !!!!!!!!!!

		}

	}

}


void Bank::charges(double d) {

	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
		double newValue = (*it)->getAmount() - d;
		(*it)->setAmount(newValue);
	}

}



void Bank::addInterest(double d) {

	vector<Account*>::iterator it;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {
		double newValue = (*it)->getAmount() + d;
		(*it)->setAmount(newValue);
	}

}



double Bank::getAverageAmount() {

	vector<Account*>::iterator it;

	double sum = 0;
	int n = 0;

	for (it = accounts_.begin(); it != accounts_.end(); it++) {

		sum += (*it)->getAmount();
		n++;
	}
	return (sum / n);

}

double Bank::getStandardDeviation() {

	vector<Account*>::iterator it;

	double i = 0;
	double sum = 0;
	double average = getAverageAmount();
	double ret = 0;


	for (it = accounts_.begin(); it != accounts_.end(); it++) {

		i = (*it)->getAmount();
		sum += (i - average)*(i - average);
	}

	ret = sqrt((sum / accounts_.size()));

	return ret;
}



Account& Bank::getMaxAccount() {

	vector<Account*>::iterator it;

	Account *maxAccount = accounts_[0];

	for (it = accounts_.begin(); it != accounts_.end(); it++) {

		if ((*it)->getAmount() > maxAccount->getAmount()) {
			maxAccount = *it;

		}
	}
	return *maxAccount;
}

string Bank::toString() const {

	ostringstream os;
	vector<Account*>::const_iterator it;


	os << "\nBANK: " << name_ << endl;

	/*for(int i=0; i < accounts_.size(); i++)
	os << accounts_[i]->toString() << endl;*/

	/*for(it= accounts_.begin(); it !=accounts_.end(); it++)
	os << (*it)->toString() << endl;*/

	for (auto paccount : accounts_)
		os << paccount->toString() << endl;


	return os.str();


}