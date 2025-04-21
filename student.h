#include<iostream>
using namespace std;
class Student {
	public:
	string name;
	int rollNumber;
	float marks;
	public:
	void getData() {
		cout << "Enter the name: ";
		cin >> name;
		cout << "Enter Roll No: ";
		cin >> rollNumber;
		cout << "Enter marks: ";
		cin >> marks;
	}
	void displayData() {
		cout << "\nStudent Information:\n";
		cout << "Name: " << name;
		cout << "\nRoll No: " << rollNumber;
		cout << "\nMarks: " << marks;
	}
};
