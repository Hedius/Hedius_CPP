#include "fraction.h"
#include <sstream>
using namespace std;

Fraction::Fraction(double nom, double denom) { //Klassenkonstruktor
	this->nominator_ = nom;
	this->denominator_ = denom;
}
Fraction::Fraction(const Fraction& other) {
	this->nominator_ = other.nominator_;
	this->denominator_ = other.denominator_;
}

string Fraction::toString() const
{
	ostringstream os;
	 
	os << "[" << nominator_ << "/" << denominator_ << "]" << endl;

	return os.str();
}

Fraction Fraction::mul(const Fraction & other)
{
	/*
	double nom, denom;
	nom=this->nominator_*other.nominator_;
	denom=this->denominator_*other.denominator_;
	return Fraction(nom, denom);
	*/
	//Rekursiv
	return Fraction(this->nominator_*other.nominator_, this->denominator_*other.denominator_);
	}

