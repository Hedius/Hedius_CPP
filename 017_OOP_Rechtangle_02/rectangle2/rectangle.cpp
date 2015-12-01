#include "Rectangle.h"

#include <iostream>
#include <sstream>
int Rectangle::count_ = 0;

Rectangle::Rectangle(int l, int w) {
	this->length = l;
	this->width = w;
	count_++;
}
Rectangle::Rectangle(const Rectangle& other) {
	this->length = other.length;
	this->width = other.width;
	count_++;
}

Rectangle Rectangle::getMaxRect(const Rectangle& other) {
	int l = (this->length < other.length) ? other.length : this->length;
	int w = (this->width < other.width) ? other.width : this->width;
	return Rectangle(l, w);
}

string Rectangle::toString() const
{
	ostringstream os;

	os << "[" << length*width << "]" << endl;
	for (int i = 0;i < width;i++) {
		for (int i2 = 0;i2 < length;i2++) {
			os << "*";
		}
		os << endl;
	}

	return os.str();
}

int Rectangle::getCount() {
	return count_;
}

Rectangle::~Rectangle() {
	count_--;
	//cout << "DESTRO" << endl;
}