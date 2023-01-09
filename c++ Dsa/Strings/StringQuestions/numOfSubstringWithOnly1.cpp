#include<bits/stdc++.h>
using namespace std;

int numSub(string s) {
    int count = 0;
    int i = 0;
    long long int ans = 0;
    const int mod = 1e9 + 7;
    while(i < s.length()) {
        count = s[i] == '1' ? count + 1 : 0;
        ans = (ans + count) % mod;
        i++;
    }
    return ans;
}


int main() {
    string s = "0001100111";
    cout << numSub(s) << endl;
    return 0;
}