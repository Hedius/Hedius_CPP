// rectangle.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle(int l = 1, int w = 1);
	Rectangle(const Rectangle& other) {
		this->length = other.length;
		this->width = other.width;
	}

	string toString() const
	{
		ostringstream os;

		os << "[" << length*width << "]" << endl;
		for (int i = 0;i < width;i++) {
			for (int i2 = 0;i2 < length ;i2++) {
				os << "*";
			}
			os << endl;
		}

		return os.str();
	}
	Rectangle getArea(Rectangle& other) {
		return Rectangle(this->length*other.length, this->width*width);
	}
};

Rectangle::Rectangle(int l, int w) {
	this->length = l;
	this->width = w;

}
int main()
{
	system("color 12");
	Rectangle a(5, 3);   // length, width
	Rectangle b(a);
	Rectangle c;

	c = a.getArea(b);	// length*width

	cout << "c= " << c.toString() << endl;
    return 0;
}

