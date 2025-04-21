#include<iostream>
using namespace std;
class Temperature {
	public:
	double CelciusTemp;
	public:
		double infahrenheit() {
			return (CelciusTemp*9/5) + 32;
		}
		void display() {
			double Fahrenheit = infahrenheit();
			cout << "Temperature in Fahrenheit: " << Fahrenheit << "F";
		}
	};
