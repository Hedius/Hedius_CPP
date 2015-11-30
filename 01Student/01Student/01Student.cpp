
#include <iostream>
using namespace std;
#include "student.h"
#include "schoolclass.h"

int main(int argc, const char * argv[]) {

	Student flo("Flo", 70.0);
	Student kuban("KLein Eric", 60.0);
	Student wappla("Bernd Chang", 45.0);
	cout << flo.toString() << endl;
	cout << kuban.toString() << endl;
	cout << wappla.toString() << endl;

	schoolclass schoolclass("4+5AHEL");
	cout << schoolclass.toString() << endl;

	schoolclass.add(flo);
	schoolclass.add(kuban);
	schoolclass.add(wappla);
	cout << schoolclass.toString() << endl;
	// print class name and all associated students
	//cout << schoolclass.toString() << endl;


	Student massiest = schoolclass.getMassiest();

	// print name and weight
	cout << "The massiest" << massiest.toString() << endl;
	return 0;
}
