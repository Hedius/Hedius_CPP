// rectangle.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#include "Rectangle.h"

int main()
{

	Rectangle meadow;
	Rectangle forest(20, 5);

	cout << "My MEADOW: " << endl;
	cout << meadow.toString() << endl;

	cout << "My FOREST: " << endl;
	cout << forest.toString() << endl;


	// ----------------- static members/methods
	cout << endl << "My sole property: " << endl;
	cout << Rectangle::getCount() << " Rectangle-Objects";


	cout << endl;
	cout << "I want to buy an island!" << endl;
	Rectangle* island = new Rectangle();

	cout << endl << "My sole property is now: " << endl;
	cout << Rectangle::getCount() << " Rectangle-Objects";


	cout << endl;
	cout << "Now i am selling the island" << endl;
	delete 	island;

	cout << endl << "My sole property is now: " << endl;
	cout << Rectangle::getCount() << " Rectangle-Objects";


	cout << endl;
	cout << endl;
	return 0;
	return 0;
}

