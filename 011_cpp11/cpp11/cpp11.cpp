// cpp11.cc
// The reference
#include <iostream>
using namespace std;

int main()
{
	int actualint = 123;
	int& otherint = actualint;     // Reference declaration

	cout << '\n' << actualint;//123
	cout << '\n' << otherint;//123

	otherint++;

	cout << '\n' << actualint;//124
	cout << '\n' << otherint;//124

	actualint++;

	cout << '\n' << actualint;//125
	cout << '\n' << otherint; //125

	return 0;
}
