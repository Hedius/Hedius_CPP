// cpp14.cc
//References as Return Values

#include <iostream>
using namespace std;


int mynum = 0;    // global var

int &num()
{
	return mynum;
}

int main()
{
	int i;
	i = num();
	cout << i << endl;
	num() = 5;   // mynum set to 5

	cout << mynum << endl;
	i = num();
	cout << i << endl;
	return 0;
}
