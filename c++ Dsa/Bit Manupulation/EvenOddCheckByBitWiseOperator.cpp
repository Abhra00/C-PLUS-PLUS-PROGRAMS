#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter the number" << endl;
	cin >> num;
	if(num & 1 == 1) {
		cout << "The number is odd" << endl;
	} else {
		cout << "The number is even" << endl;
	}
	return 0;
} 