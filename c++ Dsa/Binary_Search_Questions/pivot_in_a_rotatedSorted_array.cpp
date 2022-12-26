#include<bits/stdc++.h>
using namespace std;
int findPivot (int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main() {
    int arr[] = {3,8,10,17,1};
    cout << "The pivot element is in the " << findPivot(arr,5) << " no index" << endl;
    return 0;
    
}