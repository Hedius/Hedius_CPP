#include "Account.h"
#include <sstream>
using namespace std;

int Account::nextNumber = 0;

Account::Account(string name, double d)
{
	nextNumber++;
	owner_ = name;
	number_ = nextNumber;
	amount_ = d;
}

string Account::toString()const {

	ostringstream os;

	os << "\nACCOUNT owner " << owner_ << endl;
	os << "\nACCOUNT number " << number_ << endl;
	os << "\nACCOUNT amount " << amount_ << endl;

	return os.str();

}

