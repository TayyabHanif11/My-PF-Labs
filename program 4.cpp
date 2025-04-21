#include<iostream>
#include"temperature.h"
using namespace std;


	int main () {
		Temperature temp;
		cout << "Enter temperature: ";
		cin >> temp.CelciusTemp;
		temp.display();
		return 0;
	}
