#pragma once
/*
#ifndef FRACTION_H
#define FRACTION_H
#endif
*/

#pragma once
#include <string>
using namespace std;

class Fraction {
	
private:
		//private data members
		double nominator_;
		double denominator_;
public:
	//cons, destr
	Fraction(double nom=1.0, double denom=1.0);
	Fraction(const Fraction& other); // copy constructor

	//getter/setter

	//general member functions /methods
	string toString() const;
	Fraction mul(const Fraction& other);
};