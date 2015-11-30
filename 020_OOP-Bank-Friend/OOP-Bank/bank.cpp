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

	for(int i=0; i<accounts_.size();i++){
	os << accounts_[i] -> toString() << endl;
	}

	/*  for(it=accounts_.begin(); it!=accounts_.end();it++){
	os << (*it) -> toString() << endl;
	}*/

	/*for (auto paccount : accounts_) {
		os << paccount->toString() << endl;
	}*/

	return os.str();
}

void Bank::addAccount(Account& account)
{
	accounts_.push_back(&account);
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

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int Bank::addAccount(string owner, double d){
	Account* p= new Account(owner,d);
	accounts_.push_back(p);
	return p->number_;
	
}

void Bank::delAccount(string owner) {
	vector<Account*>::iterator it;
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		if (owner==(*it)->owner_) {
			delete (*it);
			accounts_.erase(it);
			return;
		}
	}
}

Account& Bank::getAccount(int number) {
	vector<Account*>::iterator it;
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		if (number == (*it)->number_) {
			
			
			return  (**it);
		}
	}
}

Bank::~Bank() {
	for (int i = 0;i < accounts_.size();i++)
		delete accounts_[i];
}


Account& Bank::getMaxAccount(){
	vector<Account*>::iterator it;
	vector<Account*>::iterator it1;
	double help = -1000000.0;
	
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		if (help <= (*it)->getAmount()) {
			help = (*it)->getAmount();
			it1 = it;
			
		}
	}
	return  (**it1);
}

double Bank::getStandardDeviation() {
	vector<Account*>::iterator it;
	double x=0.0;
	double avg = getAverageAmount();
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		x = ((*it)->getAmount() - avg);
		pow(x, 2.0);
	}

	x = sqrt(x);
	return x;
}

double Bank::getAverageAmount() {
	vector<Account*>::iterator it;
	double x = 0.0;
	for (it = accounts_.begin(); it != accounts_.end();it++) {
		x += (*it)->getAmount();
	}
	x = x / accounts_.size();
	return x;
}