#include<bits/stdc++.h>
using namespace std;
int firstOccurence (int arr[], int size , int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1; 
        }
    }
    return ans;
}

int lastOccurence (int arr[], int size , int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main () {
    int arr[] = {0, 5, 5, 6, 6, 6};
    int size = 6;
    int key = 3;
    cout << "fisrtOccurence of " << key << " is at index no:-> " << firstOccurence(arr, size, key) << endl;
    cout << "lastOccurence of " << key << " is at index no:-> " << lastOccurence(arr, size, key) << endl;
    return 0;
}