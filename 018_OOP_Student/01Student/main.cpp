
#include <iostream>
using namespace std;
#include "student.h"
#include "schoolclass.h"

int main(int argc, const char * argv[]) {

	Student flo("Flo", 75.0);
	Student kuban("KEV", 60.0);
	Student flexx("Flexx", 45.0);
	

	schoolclass schoolclass("4AHEL");
	cout << schoolclass.toString() << endl;

	schoolclass.add(flo);
	schoolclass.add(kuban);
	schoolclass.add(flexx);
	// print class name and all associated students
	cout << schoolclass.toString() << endl;
	
	


	Student massiest = schoolclass.getMassiest();

	// print name and weight
	cout << "The massiest" << massiest.toString() << endl;
	return 0;
}
