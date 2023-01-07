#include<bits/stdc++.h>
using namespace std;
void selectionSort (int arr[], int size) {
	for(int i = 0; i < size; i++) {
		int minIdx = i;
		for(int j = i + 1; j < size; j++) {
			if(arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		swap(arr[i], arr[minIdx]);
	}
}

void printArray (int arr[], int size) {
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	int size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int *arr = new int[size];
	cout << "Enter the array elements:->" << endl;
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Initial Array" << endl;
	printArray(arr, size);
	selectionSort(arr, size);
	cout << "After sorting" << endl;
	printArray(arr, size);
	return 0;
}