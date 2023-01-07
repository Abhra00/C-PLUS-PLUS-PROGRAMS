#include<bits/stdc++.h>
using namespace std;
int binarySearch (int arr[], int size , int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1 ;
}

int main () {
    int arr[] = {1,12,34,45,67,89};
    int size = 6;
    int key = 45;
    cout << key << " is present in index no:-> " << binarySearch(arr, size, key);
    return 0;
}