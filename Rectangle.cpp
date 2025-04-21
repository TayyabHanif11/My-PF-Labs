#include<iostream>
#include"rectangle.h"
using namespace std;

void Rectangle::setDimensions() {
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> width;
}
int Rectangle::area() {
	return length*width;
}
int Rectangle::perimeter() {
	return 2*(length+width);
}
int main() {
	Rectangle rec;
	rec.setDimensions();
	cout << "\nArea: " << rec.area();
	cout << "\nPerimeter: " << rec.perimeter();
}
