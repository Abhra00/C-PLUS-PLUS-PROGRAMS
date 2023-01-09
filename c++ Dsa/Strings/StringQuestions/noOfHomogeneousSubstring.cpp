#include<bits/stdc++.h>
using namespace std;

int countHomogenous(string s) {
    long long ans = 0;
    int mod = 1000000007;
    for(int i = 0; i < s.length(); i++) {
        long count = 1;
        while(i + 1 < s.length() && s[i] == s[i + 1]) {
            count++;
            i++;
        } 
        ans += (count * (count + 1)) / 2;
        
    }
    ans = ans % mod;
    return (int)ans;
}

int main() {
    string s = "abbcccaa";
    cout << countHomogenous(s) << endl;
    return 0;
}