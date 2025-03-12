//#include<iostream>
//using namespace std;
//int main() {
//	int a; int b=0; int c;
//	cout << "Enter a number: ";
//	cin >> a;
//	while(b<10) {
//		b++;
//		c=a*b;
//		cout << "\n" << a << " * " << b << " = " << c;
//	} return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	int a=1,sum=0;
//	while(a<=5) {
//		sum=sum+a;
//		a++;
//	} 
//	cout << sum;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main() {
//	int num;
//	cout << "Enter the number: "; cin >> num;
//	while (num<0) {
//		cout << "You entered a negative number. \nRe enter: " << endl; cin >> num;
//	}
//	cout << "The number is positive." << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	int N,n=1;
//	cout << "Enter a number: ";
//	cin >> N;
//	while(n<=N) {
//		cout << n << endl;
//		n++;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	int balance=1000; char choice;
//	int dep_money; int withdrawcash; int currentbalance;
//	cout << "\nMenu of the Banking System\n";
//	cout << "--------------";
//	while(choice!='4') {
//		
//		cout << "\n\nChoice 1 is to deposit money. 2 is to withdraw. 3 is to check balance.";
//		cout << "\n\nEnter choice 4 if you want to exit the menu.";
//		cout << "\n\nEnter Choice: ";
//		cin >> choice;
//		switch (choice) {
//			case '1':
//				cout << "\nYou chose depositing money option.";
//				cout << "\nEnter the amount you want to deposit: ";
//				cin >> dep_money;
//				if(dep_money>0) {
//					balance=balance+dep_money;
//					cout << "Your deposited money is " << dep_money << "$ and now your current account balance is: " << balance << "$";
//				} else {
//					cout << "\nWrong input entered.";
//				} break;
//			 case '2':
//			cout << "\nYou chose withdraw money option.";
//			cout << "\nEnter the amount you want to withdraw: ";
//			cin >> withdrawcash;
//			if(withdrawcash<=0) {
//				cout << "\nWrong amount entered.";
//			} else if(withdrawcash>balance) {
//			    cout << "\nInsufficient balance";
//			} else {
//				balance=balance-withdrawcash;
//				cout << "\nYour withdraw amount is " << withdrawcash << "$ and now your current account balance is: " << balance << "$";
//			} break;
//	     case '3':
//	        cout << "\nYou want to check your balance.";
//	        cout << "\nYour current account balance is: " << balance << "$."; 
//	        break;
//	        case '4':
//	        	cout << "\nMenu closed.";
//	        	break;
//	        default:
//	        	cout << "\nYou entered wrong choice.\n";
//	        	break; }
//	        
//} cout << "\nThank you for using the menu";   return 0;
//}



//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    string correctPassword = "12345"; 
//    string enteredPassword;          
//    cout << "Please enter the correct password:" << endl;
//
//    do {
//        cout << "Enter password: ";
//        cin >> enteredPassword;
//
//        if (enteredPassword!=correctPassword) {
//            cout << "Incorrect password. Please try again." << endl;
//        }
//    } while (enteredPassword!=correctPassword);
//
//    cout << "Password is correct. Access granted!";
//
//    return 0;
//}





//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int choice;
//    double quantity, price, totalBill = 0;
//    char moreOrders;
//
//    cout << "Welcome to the Restaurant!\n";
//    
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Chicken Karahi - 1200 per KG\n";
//        cout << "2. Mutton Karahi - 1800 per KG\n";
//        cout << "3. Biryani - 800 per KG\n";
//        cout << "4. Pulao - 750 per KG\n";
//        cout << "5. Tandoori Roti - 20 each\n";
//        cout << "6. Naan - 30 each\n";
//        
//        cout << "\nEnter your choice: ";
//        cin >> choice;
//        
//        if (choice < 1 || choice > 6) {
//            cout << "Invalid choice. Try again.\n";
//            continue;
//        }
//
//        cout << "Enter quantity (KGs for Karahi/Rice, pieces for Roti/Naan): ";
//        cin >> quantity;
//
//        switch (choice) {
//            case 1: price = 1200; break;
//            case 2: price = 1800; break;
//            case 3: price = 800; break;
//            case 4: price = 750; break;
//            case 5: price = 20; break;
//            case 6: price = 30; break;
//        }
//
//        totalBill += price * quantity;
//
//        cout << "Do you want to order more? (y/n): ";
//        cin >> moreOrders;
//
//    } while (moreOrders == 'y' || moreOrders == 'Y');
//
//    cout << "\nTotal Bill: " << totalBill << " PKR\n";
//    cout << "Thank you for your order!\n";
//
//    return 0;
//}


