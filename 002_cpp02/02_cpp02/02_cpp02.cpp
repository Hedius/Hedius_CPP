// cpp02.cpp
///////////
// A program without function prototypes
// Note: This will not compile *it will xD
#include <iostream>
using namespace std;

void display(char const*s);

int main()
{
	display("Hello, world");
	return 0;
}

void display(char const*s)       //void display (s)
{                            //char *s;    //Error: old style doesn't work
	cout << s;                   //{

}                            //  cout << s;



