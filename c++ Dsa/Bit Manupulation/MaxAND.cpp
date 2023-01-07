#include<bits/stdc++.h>
using namespace std;

int getCount(int num, int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i] & num )== num) {
            count++;
        }
    }
    return count;
}
    
int maxAND (int arr[], int n) {
    // Complete the function
    int ans = 0;
    for(int i = 31; i >= 0; i--) {
        int x = ans | (1 << i);
        int count = getCount(x, arr, n);
        if(count >= 2) {
            ans = ans | (1 << i);
        }
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << maxAND(arr, n) << endl;
    return 0;
}