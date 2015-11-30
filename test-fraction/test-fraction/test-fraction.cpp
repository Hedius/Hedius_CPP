// test-fraction.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
using namespace std;
#include <iostream>


#include "fraction.h"

int main(){
	
	
	Fraction a(3.0, 2.0);
	cout << "a= " << a.toString() << endl;
	Fraction b(a);
	cout << "b= " << b.toString() << endl;
	Fraction c;
	c = a.mul(b);
	cout << "c= " << c.toString() << endl;
   


	//c = [9.0 / 4.0];

    return 0;
}

