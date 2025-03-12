//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	if (num>0) {
//		cout << "The number is positive.";
//		} else if (num<0) {
//			cout << "The number is negative.";
//		} else {
//			cout << "The number is zero.";
//		}
//		return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int temperature;
//	cout << "Enter the temperature: ";
//	cin >> temperature;
//	if (temperature>=40) {
//	cout << "Extremely hot weather. Stay indoors.";	
//	} else if (temperature>=30 && temperature<=39) {
//		cout << "Drink plenty of water and stay hydrated.";
//	} else if (temperature>=20 && temperature<=29) {
//		cout << "Weather is pleasant and suitable for outdoor activities.";
//	} else {
//		cout << "Wear warm clothes to stay comfortable in the cold weather.";
//	}
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int password;
//	string username;
//	cout << "Username: ";
//	cin >> username;
//	cout << "Password: ";
//	cin >> password;
//	if (username=="admin" && password==12345) {
//		cout << "Access Granted.";
//	} else if (username=="admin") {
//		cout << "Wrong password.";
//	} else {
//		cout << "User not found";
//	}
//}





//#include <iostream>
//using namespace std;
//int main() {
//    double subject1, subject2, subject3, totalMarks, percentage;
//    char grade1, grade2, grade3;
//
//    cout << "Enter marks for subject 1: ";
//    cin >> subject1;
//    cout << "Enter marks for subject 2: ";
//    cin >> subject2;
//    cout << "Enter marks for subject 3: ";
//    cin >> subject3;
//
//    if (subject1 < 60 || subject2 < 60 || subject3 < 60) {
//        cout << "Failed" << endl;
//        return 0;
//    }
//
//    totalMarks=subject1+subject2+subject3;
//    percentage= (totalMarks/300) * 100;
//
//    if (subject1 >= 90) {
//        grade1 = 'A';
//    } else if (subject1 >= 80) {
//        grade1 = 'B';
//    } else if (subject1 >= 70) {
//        grade1 = 'C';
//    } else if (subject1 >= 60) {
//        grade1 = 'D';
//    } else {
//        grade1 = 'F';
//    }
//
//    if (subject2 >= 90) {
//        grade2 = 'A';
//    } else if (subject2 >= 80) {
//        grade2 = 'B';
//    } else if (subject2 >= 70) {
//        grade2 = 'C';
//    } else if (subject2 >= 60) {
//        grade2 = 'D';
//    } else {
//        grade2 = 'F';
//    }
//
//    if (subject3 >= 90) {
//        grade3 = 'A';
//    } else if (subject3 >= 80) {
//        grade3 = 'B';
//    } else if (subject3 >= 70) {
//        grade3 = 'C';
//    } else if (subject3 >= 60) {
//        grade3 = 'D';
//    } else {
//        grade3 = 'F';
//    }
//    cout << "Total Marks: " << totalMarks << endl;
//    cout << "Percentage: " << percentage << "%" << endl;
//    cout << "Grade for Subject 1: " << grade1 << endl;
//    cout << "Grade for Subject 2: " << grade2 << endl;
//    cout << "Grade for Subject 3: " << grade3 << endl;
//
//    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && totalMarks >= 270) {
//        cout << "Eligible for Merit Scholarship" << endl;
//    } else if ((grade1 == 'A' || grade1 == 'B') && (grade2 == 'A' || grade2 == 'B') && (grade3 == 'A' || grade3 == 'B') && totalMarks >= 240) {
//        cout << "Eligible for Regular Scholarship" << endl;
//    } else {
//        cout << "Not Eligible for Scholarship" << endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//using namespace std;

//int main() {
//    int age;
//    double income;
//
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Enter your annual income: ";
//    cin >> income;
//
//    if (age >= 18) {
//        if (income >= 30000) {
//            cout << "Congratulations! You are eligible for a loan." << endl;
//        } else {
//            cout << "You meet the age requirement but are not eligible for a loan because your income is below $30,000." << endl;
//        }
//    } else {
//        cout << "You are not eligible for a loan because you are under 18 years of age." << endl;
//}
//return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string username, password, role;
//
//    const string ADMIN_USERNAME = "admin";
//    const string ADMIN_PASSWORD = "password123";
//
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//
//    if (username == ADMIN_USERNAME && password == ADMIN_PASSWORD) {
//        cout << "Authentication Successful" << endl;
//        cout << "Enter role (Admin, Guest, or other): ";
//        cin >> role;
//
//        if (role == "Admin") {
//            cout << "Full Access" << endl;
//} else if (role == "Guest") {
//            cout << "Limited Access" << endl;
//        } else {
//            cout << "No Access" << endl;
//        }
//    } else {
//        cout << "Authentication Failed. Access Denied." << endl;
//    }
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,sum;
//	cout << "Enter three numbers: ";
//	cin >> a >> b >> c;
//	sum=a+b+c;
//	cout << "\nSum of these three numbers is: " << sum;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	double a,b,c;
//	cout << "Enter the marks: ";
//	cin >> a >> b;
//	c=(a+b)/200*100;
//	cout << "\nPercentage: " << c;
//	return 0;
//}
