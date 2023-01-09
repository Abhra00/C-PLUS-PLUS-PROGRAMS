#include <bits/stdc++.h>
using namespace std;

int minimumLength(string s)
{
    int lo = 0;
    int hi = s.length() - 1;
    while (lo < hi && s[lo] == s[hi])
    {
        char ch = s[lo];
        while (lo < hi && ch == s[lo]) {
            lo++;
        }
        while (lo <= hi && ch == s[hi]) {
            hi--;
        }
    }
    return hi - lo + 1;
}

int main()
{
    string str = "aabccabba";
    cout << minimumLength(str) << endl;
    return 0;
}