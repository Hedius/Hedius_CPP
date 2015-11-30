#pragma once
#include <string>
using namespace std;
class Bank {
private:
	string name_;
public:
	Bank(string name);

	string toString() const;
};