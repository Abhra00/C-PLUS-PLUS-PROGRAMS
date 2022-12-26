#include<bits/stdc++.h>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void insertionSort (int arr[] , int size) {

	for(int i = 1; i < size; i++) {
		int temp = arr[i];
		int j = i - 1;
		while(j >= 0) {
			if(arr[j] > arr[j+1]) {
				arr[j+1] = arr[j];
				j--;
			} 
			else {
				break;
			}
		}
		arr[j+1] = temp;
	}
    
}


int main() {
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int *arr = new int [size];
    cout << " Ente your array elements:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "your initial array is: " << endl;
    printArray(arr, size);
    insertionSort(arr, size);
    cout << endl << "After sorting your array is:-" << endl;
    printArray(arr, size);
    return 0;
}
