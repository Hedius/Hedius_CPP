// test-fraction.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "fraction.h"
using namespace std;

int main(){
	Fraction a(3.0, 2.0);
	cout << "a= " << a.toString() << endl;

	Fraction b(a);
	cout << "b= " << b.toString() << endl;
	
	Fraction c;
	c = a.mul(b);
	cout << "c= " << c.toString() << endl;
   	
	return 0;
}
/* Output
a = [3 / 2]

b = [3 / 2]

c = [9 / 4]

Drücken Sie eine beliebige Taste . . .

*/