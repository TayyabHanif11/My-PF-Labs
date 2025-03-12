1.
//#include <iostream>
//using namespace std;
//int main() {
//	int a=1;
//	int arr[5]={4,5,6,2,8};
//	for(int i=0;i<5;i++) {
//		cout << "Element No. " << a << " = " << arr[i] << endl;
//		a++;
//	}
//	return 0;
//}


2.
//#include<iostream>
//using namespace std;
//int main() {
//	int N,a=1;
//	cout << "Enter the number of elements: ";
//	cin >> N;
//	int arr[N];
//	for(int i=0;i<N;i++) {
//		cout << "Enter Element No. " << a << ": ";
//		cin >> arr[i];
//		a++;
//	}
//	cout << "\n";
//	for(int j=N-1;j>=0;j--) {
//		cout << "Element No. " << j+1 << ": " << arr[j] << endl;
//	} return 0;
//}


3.
//#include<iostream>
//using namespace std;
//int main() {
//	int arr1[]={10,20,30,40,50,61};
//	int sum=0;
//	float average;
//	int size=sizeof(arr1)/sizeof(arr1[1]);
//	for (int i=0;i<size;i++) {
//	sum+=arr1[i];
//	}
//	cout << "Sum of members of array: " << sum;
//	average=(float)sum/size;
//	cout << "\nAverage: " << average;
//}


4.
#include<iostream>
using namespace std;
int main() {
	int arr[]={3,4,5,9};
	int length;
	length=sizeof(arr)/sizeof(arr[0]);
	cout << "Length of array: " << length << " elements.";
}


5.
#include<iostream>
using namespace std;
int main() {
	int N;
	cout << "Number of elements: ";
	cin >> N;
	int arr[N];
	cout << "Enter " << N << " Elements: ";
	for(int i=0;i<N;i++) {
		cin >> arr[i];
	}
	int max=arr[0];
	for(int j=1;j<N;j++) {
		if(arr[j]>max) {
			max=arr[j];
		}
	}
	cout << "\nLargest Number: " << max;
	return 0;
}


