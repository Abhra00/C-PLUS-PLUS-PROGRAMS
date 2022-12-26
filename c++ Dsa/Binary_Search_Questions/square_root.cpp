#include<bits\stdc++.h>
using namespace std;
long long mySqrt(int x) {
    long long int start = 0;
    long long int end = x;
    if(x == 0)
    {
        return 0;
    }
    long long int mid = start + (end - start) / 2;
    long long int ans;
    while(start <= end) {
        if(mid * mid == x) {
            return mid;
        } 
        else if(mid * mid < x) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double preciseSquraeRoot(int n, int temp , int points) {
    double ans = temp;
    double factor = 1;
    for(int i = 0; i < points ; i++) {
        factor = factor / 10;
        for(double j = ans; j*j < n; j += factor) {
            ans = j;
        }
    }
    return ans;
}
int main () {
    int n;
    cin >> n;
    int temp = mySqrt(n);
    int points;
    cout << "Enter the no of decimal points:" << endl;
    cin >> points;
    cout << preciseSquraeRoot(n, temp, points);
    return 0;
}