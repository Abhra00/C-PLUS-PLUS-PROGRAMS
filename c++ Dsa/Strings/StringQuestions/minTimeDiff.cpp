#include<bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
    int n = timePoints.size();
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        string cTime = timePoints[i];
        int minute = stoi(cTime.substr(0,2)) * 60 + stoi(cTime.substr(3));
        arr[i] = minute;
    }
    int ans = (int) 1e9;
    sort(arr, arr + n);
    for(int i = 1; i < n; i++) {
        ans = min(ans, arr[i] - arr[i - 1]);
    }
    ans = min(ans, (24*60 - arr[n - 1]) + arr[0]);
    return ans;
}

int main() {
    vector<string> timePoints = {"00:00","23:59","00:00"};
    cout << findMinDifference(timePoints) << endl;
    return 0;
}