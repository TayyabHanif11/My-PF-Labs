//#include <iostream>
//using namespace std;
//const double PI = 3.14159;
//
//int main() {
//    int choice;
//    double radius, length, width, base, height;
//
//    cout << "Shape Area Calculator" << endl;
//    cout << "1. Circle" << endl;
//    cout << "2. Rectangle" << endl;
//    cout << "3. Triangle" << endl;
//    cout << "Enter your choice (1-3): ";
//    cin >> choice;
//
//    switch (choice) {
//        case 1:
//            cout << "Enter circle radius: ";
//            cin >> radius;
//            cout << "Circle area: " << PI * radius * radius << endl;
//            break;
//        case 2:
//            cout << "Enter rectangle length: ";
//            cin >> length;
//            cout << "Enter rectangle width: ";
//            cin >> width;
//            cout << "Rectangle area: " << length * width << endl;
//            break;
//        case 3:
//            cout << "Enter triangle base: ";
//            cin >> base;
//            cout << "Enter triangle height: ";
//            cin >> height;
//            cout << "Triangle area: " << 0.5 * base * height << endl;
//            break;
//        default:
//            cout << "Error: Invalid choice!" << endl;
//            break;
//    }
//return 0;
//}


//#include <iostream>
//using namespace std;
//int main() {
//    int day;
// cout << "Enter day of the week (1-7): ";
//    cin >> day;
//
//    switch (day) {
//        case 1:
//            cout << "Monday" << endl;
//            break;
//        case 2:
//            cout << "Tuesday" << endl;
//            break;
//        case 3:
//            cout << "Wednesday" << endl;
//            break;
//        case 4:
//            cout << "Thursday" << endl;
//            break;
//        case 5:
//            cout << "Friday" << endl;
//            break;
//        case 6:
//            cout << "Saturday" << endl;
//            break;
//        case 7:
//            cout << "Sunday" << endl;
//            break;
//        default:
//            cout << "Error: Invalid day!" << endl;
//            break;
//    } return 0;
//}





//#include <iostream>
//using namespace std;
//int main() {
//    double amount, convertedAmount;
//    int choice;
//    const double USD_TO_PKR = 270.0;
//    const double USD_TO_INR = 83.0;
//    const double USD_TO_EUR = 0.88;
//    cout << "Currency Converter" << endl;
//    cout << "1. USD to PKR" << endl;
//    cout << "2. USD to INR" << endl;
//    cout << "3. USD to EUR" << endl;
//    cout << "Enter your choice (1/2/3): ";
//    cin >> choice;
//    cout << "Enter amount in USD: ";
//    cin >> amount;
//    switch (choice) {
//        case 1:
//            convertedAmount = amount*USD_TO_PKR;
//            cout << amount << " USD = " << convertedAmount << " PKR" << endl;
//            break;
//        case 2:
//            convertedAmount = amount*USD_TO_INR;
//            cout << amount << " USD = " << convertedAmount << " INR" << endl;
//            break;
//        case 3:
//            convertedAmount = amount*USD_TO_EUR;
//            cout << amount << " USD = " << convertedAmount << " EUR" << endl;
//            break;
//        default:
//            cout << "Invalid choice" << endl;
//            break;
//    }
//
//    return 0;
//}






//#include <iostream>
//using namespace std;
//int main() {
//    double num1, num2;
//    char operator_;
//
//    cout << "Simple Calculator" << endl;
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter operator (+, -, *, /): ";
//    cin >> operator_;
//    cout << "Enter second number: ";
//    cin >> num2;
//
//    switch (operator_) {
//        case '+':
//            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//            break;
//        case '-':
//            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//            break;
//        case '*':
//            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//            break;
//        case '/':
//            if (num2 != 0)
//                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//            else
//                cout << "Error: Division by zero!" << endl;
//            break;
//        default:
//            cout << "Error: Invalid operator!" << endl;
//            break;
//    }
//
//    return 0;
//}





//#include<iostream>
//using namespace std;
//int main()
//{
//	char category,item;
//	float quantity,total_price,price,discount,net_total;
//    cout << "Enter the category. \nE represents Electronics. \nC represents Clothing. \nG represents Grocery.\n\n";
//    cin >> category;
//    switch (category) {
//    	case 'E' :
//    	cout << "You entered electronics category. ";
//        cout << "\nHere, items include: ";
//        cout << "\nLaptop($1000) \nSmartphone($700) \nHeadphones($150)";
//        cout << "\n\nEnter your desired item. \nL represents Laptop. \nS represent Smartphone. \nH represents Headphones.\n\n";
//        cin >> item;
//        switch (item) {
//        	case 'L' :
//        		price=1000;
//        		cout << "You selected Laptop. \nIt's price is $1000.";
//        		break;
//        		case 'S' :
//        			price=700;
//        			cout << "You selected Smartphone. \nIt's price is $700.";
//        			break;
//        			case 'H' :
//        				price=150;
//        				cout << "You selected Headphones. \nIt's price is $150.";
//        				break;
//        				default:
//        					cout << "\nInvalid input.";
//        					break;
//		}
//    	case 'C' :
//    	cout << "\nYou entered clothing category. ";
//    	cout << "\nHere items include: ";
//    	cout << "\nJacket($120) \nT-shirt($40) \nJeans($60)";
//    	cout << "\n\nEnter your desired item. \nJ represents Jacket. \nT represent T-shirt. \nj represents Jeans.\n\n";
//    	cin >> item;
//    	switch (item) {
//        	case 'J' :
//        		price=120;
//        		cout << "You selected Jacket. \nIt's price is $120.";
//        		break;
//        		case 'T' :
//        			price=40;
//        			cout << "You selected T-shirt. \nIt's price is $40.";
//        			break;
//        			case 'j' :
//        				price=60;
//        				cout << "You selected Jeans. \nIt's price is $60.";
//        				break;
//		}
//    	break;
//    	case 'G' :
//    	cout << "\nYou entered grocery category";
//    	cout << "\nHere items include: ";
//    	cout << "\nMilk(1 Liter - $2) \nBread(1 Loaf - $3) \nEggs(1 Dozen - $5)";
//    	cout << "\n\nEnter your desired item. \nM represents Milk. \nB represents Bread. \nE represents Eggs.\n\n";
//    	cin >> item;
//    	switch (item) {
//        	case 'M' :
//        		price=2;
//        		cout << "You selected Milk. \nIt's price is $2 per Liter.";
//        		break;
//        		case 'B' :
//        			price=3;
//        			cout << "You selected Bread. \nIt's price is $3 per Load.";
//        			break;
//        			case 'E' :
//        				price=5;
//        				cout << "You selected Eggs. \nIt's price is $5 per dozen.";
//        				break;
//        			}
//    	break;
//    	default :
//    		cout << "\nWrong input entered";
//    		break;
//	}
//	cout << "\nEnter quantity: ";
//	cin >> quantity;
//	cout << "\nTotal price: \n";
//	total_price=price*quantity;
//	cout << "$" << total_price;
//	if (total_price<100) {
//		cout << "\n\nNo discount.";
//	} else if (total_price>=100 && total_price<=500) {
//		cout << "\n\n10% discount\n";
//		cout << "Discount: $";
//		discount= (total_price*10)/100;
//		cout << discount;
//		net_total= total_price-discount;
//		cout << "\n\nNet total: $" << net_total;
//	} else {
//		cout << "\n\n20% discount\n";
//		cout << "Discount: $";
//		discount= (total_price*20)/100;
//		cout << discount;
//		net_total= total_price-discount;
//		cout << "\n\nNet total: $" << net_total;
//	}
//	cout << "\n\nThanks for shopping.";
//}


#include <iostream>
using namespace std;
int main() {
    char category, item;
    float quantity, total_price = 0, price = 0, discount = 0, net_total = 0;
    cout << "Enter the category. \nE represents Electronics. \nC represents Clothing. \nG represents Grocery.\n\n";
    cin >> category;

    switch (category) {
        case 'E':
            cout << "You entered electronics category.";
            cout << "\nHere, items include: ";
            cout << "\nLaptop($1000) \nSmartphone($700) \nHeadphones($150)";
            cout << "\n\nEnter your desired item. \nL represents Laptop. \nS represents Smartphone. \nH represents Headphones.\n\n";
            cin >> item;
            switch (item) {
                case 'L':
                    price = 1000;
                    cout << "You selected Laptop. \nIt's price is $1000.";
                    break;
                case 'S':
                    price = 700;
                    cout << "You selected Smartphone. \nIt's price is $700.";
                    break;
                case 'H':
                    price = 150;
                    cout << "You selected Headphones. \nIt's price is $150.";
                    break;
                default:
                    cout << "\nInvalid input for item.";
                    return 0; 
            }
            break;

        case 'C':
            cout << "\nYou entered clothing category.";
            cout << "\nHere items include: ";
            cout << "\nJacket($120) \nT-shirt($40) \nJeans($60)";
            cout << "\n\nEnter your desired item. \nJ represents Jacket. \nT represents T-shirt. \nj represents Jeans.\n\n";
            cin >> item;
            switch (item) {
                case 'J':
                    price = 120;
                    cout << "You selected Jacket. \nIt's price is $120.";
                    break;
                case 'T':
                    price = 40;
                    cout << "You selected T-shirt. \nIt's price is $40.";
                    break;
                case 'j':
                    price = 60;
                    cout << "You selected Jeans. \nIt's price is $60.";
                    break;
                default:
                    cout << "\nInvalid input for item.";
                    return 0; 
            }
            break;

        case 'G':
            cout << "\nYou entered grocery category.";
            cout << "\nHere items include: ";
            cout << "\nMilk(1 Liter - $2) \nBread(1 Loaf - $3) \nEggs(1 Dozen - $5)";
            cout << "\n\nEnter your desired item. \nM represents Milk. \nB represents Bread. \nE represents Eggs.\n\n";
            cin >> item;
            switch (item) {
                case 'M':
                    price = 2;
                    cout << "You selected Milk. \nIt's price is $2 per Liter.";
                    break;
                case 'B':
                    price = 3;
                    cout << "You selected Bread. \nIt's price is $3 per Loaf.";
                    break;
                case 'E':
                    price = 5;
                    cout << "You selected Eggs. \nIt's price is $5 per dozen.";
                    break;
                default:
                    cout << "\nInvalid input for item.";
                    return 0; 
            }
            break;

        default:
            cout << "\nInvalid input for category.";
            return 0; // Exit the program for invalid input
    }

    cout << "\nEnter quantity: ";
    cin >> quantity;
    total_price = price * quantity;
    cout << "\nTotal price: $" << total_price;

    if (total_price < 100) {
        cout << "\n\nNo discount.";
        net_total = total_price;
    } else if (total_price >= 100 && total_price <= 500) {
        discount = (total_price * 10) / 100;
        cout << "\n\n10% discount.";
        cout << "\nDiscount: $" << discount;
        net_total = total_price - discount;
    } else {
        discount = (total_price * 20) / 100;
        cout << "\n\n20% discount.";
        cout << "\nDiscount: $" << discount;
        net_total = total_price - discount;
    }

    cout << "\n\nNet total: $" << net_total;
    cout << "\n\nThanks for shopping.";

    return 0;
}

