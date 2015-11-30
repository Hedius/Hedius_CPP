
#include <iostream>
using namespace std;
#include "student.h"
#include "schoolclass.h"

int main(int argc, const char * argv[]) {

	Student Flo("Flo", 70.0);
	Student moritz("KLein Eric", 60.0);
	Student wappla("Bernd Chang", 45.0);
	cout << Flo.toString() << endl;
	cout << moritz.toString() << endl;
	cout << wappla.toString() << endl;

	schoolclass schoolclass("4+5AHEL");
	cout << schoolclass.toString() << endl;

	schoolclass.add(Flo);
	schoolclass.add(moritz);
	schoolclass.add(wappla);
	cout << schoolclass.toString() << endl;
	// print class name and all associated students
	//cout << schoolclass.toString() << endl;


	Student massiest = schoolclass.getMassiest();

	// print name and weight
	cout << "The massiest" << massiest.toString() << endl;
	return 0;
}