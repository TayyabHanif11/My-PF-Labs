
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//    if (num > 0) {
//        cout << "The number is positive." << endl;
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//
//    if (num % 2 == 0) {
//        cout << "The number is even.";
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2, num3;
//    cout << "Enter three numbers: ";
//    cin >> num1 >> num2 >> num3;
//   if (num1 >= num2 && num1 >= num3) {
//        cout << num1 << " is the largest number." << endl;
//    } if (num2 > num1 && num2 >= num3) {
//        cout << num2 << " is the largest number." << endl;
//    } if (num3 > num1 && num3 > num2) {
//        cout << num3 << " is the largest number." << endl;
//    } return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//    int marks;
//    cout << "Enter student's marks out of 100: ";
//    cin >> marks;
//
//    if (marks >= 90 && marks <= 100) {
//        cout << "\nGrade A+";
//    }
//    if (marks >= 80 && marks < 90) {
//        cout << "\nGrade A";
//    }
//    if (marks >= 70 && marks < 80) {
//        cout << "\nGrade B";
//    }
//    if (marks >= 60 && marks < 70) {
//        cout << "\nGrade C";
//    }
//    if (marks < 60 && marks >= 0) {
//        cout << "\nFail";
//    }
//    if (marks < 0 || marks > 100) {
//        cout << "\nInvalid input";
//    }
//
//    return 0;
//}




//#include <iostream>
//using namespace std;
//int main() {
//    char color;
//
//    cout << "Enter the color of the traffic signal (R for Red, Y for Yellow, G for Green): ";
//    cin >> color;
//    if (color == 'R') {
//        cout << "Red: Stop!";
//    }
//    if (color == 'Y') {
//        cout << "Yellow: Slow down!";
//    }
//    if (color == 'G') {
//        cout << "Green: Go!";
//    }
//    if(color !='R' || color !='Y' || color != 'G') {
//    	cout << "Invalid input. Enter R, Y or G.";
//	}
//    return 0;
//}





#include <iostream>
using namespace std;

int main() {
    char grade;
    int yearsOfService;
    double basicSalary, bonus = 0, grossSalary, tax = 0, netSalary;

    cout << "Enter grade (A, B, C): ";
    cin >> grade;
    cout << "Enter years of service: ";
    cin >> yearsOfService;

    if (grade == 'A') {
        basicSalary = 50000;
    } else if (grade == 'B') {
        basicSalary = 30000;
    } else if (grade == 'C') {
        basicSalary = 20000;
    }

    if (yearsOfService >= 10) {
        bonus = 0.1 * basicSalary;
    } else if (yearsOfService >= 5 && yearsOfService <= 9) {
        bonus = 0.05 * basicSalary;
    }

    grossSalary = basicSalary + bonus;

    if (grossSalary > 40000) {
        tax = 0.2 * grossSalary;
    } else if (grossSalary >= 30000 && grossSalary <= 40000) {
        tax = 0.1 * grossSalary;
    }

    netSalary = grossSalary - tax;
    
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}





//#include <iostream>
//using namespace std;
//
//int main() {
//    double balance, withdraw;
//    cout << "Enter account balance: ";
//    cin >> balance;
//    cout << "Enter withdrawal amount: ";
//    cin >> withdraw;
//
//    if (withdraw <= balance) {
//        balance -= withdraw;
//        cout << "Remaining balance: " << balance << endl;
//    } else {
//        cout << "Insufficient balance." << endl;
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main() {
//    double salary;
//    int experience;
//    cout << "Enter salary: ";
//    cin >> salary;
//    cout << "Enter years of experience: ";
//    cin >> experience;
//
//    if (salary >= 25000 || (experience > 5 && salary >= 20000)) {
//        cout << "Eligible for loan." << endl;
//    } else {
//        cout << "Not eligible for loan." << endl;
//    }
//    return 0;
//}
