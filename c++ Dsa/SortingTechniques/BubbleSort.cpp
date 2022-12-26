#include<bits/stdc++.h>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
void bubbleSort (int arr[] , int size) {
    for(int i = 1; i < size; i++) {
        bool swapped = false;
        for(int j = 0; j < size - i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped = false) {
            break;
        }
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
    bubbleSort(arr, size);
    cout << endl << "After sorting your array is:-" << endl;
    printArray(arr, size);
    return 0;
}
