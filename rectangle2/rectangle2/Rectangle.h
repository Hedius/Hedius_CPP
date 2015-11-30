#pragma once
#include <string>
using namespace std;
class Rectangle {
private:
	//class member var are static and are shared by all objects
	static int count_;
	int length;
	int width;
public:
	Rectangle(int l = 1, int w = 1);
	Rectangle(const Rectangle& other);


	Rectangle getMaxRect(const Rectangle& other);

	string toString()const;

	static int getCount();
};
