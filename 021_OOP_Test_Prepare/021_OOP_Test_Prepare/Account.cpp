#include "account.h"
#include <sstream>


int Account::nextNumber = 0;

Account::Account(string name, double d) {

	nextNumber++;

	owner_ = name;
	number_ = nextNumber;
	amount_ = d;


}

string Account::toString() const {

	ostringstream os;

	os << "... ACOUNT-owner: " << owner_ << endl;
	os << "... ACOUNT-number: " << number_ << endl;
	os << "... ACOUNT-amount: " << amount_ << endl;

	return os.str();


}