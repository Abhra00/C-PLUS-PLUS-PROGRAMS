#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    string s1 = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
        {
            s1 += char(tolower(s[i]));
        }
    }
    int lo = 0;
    int hi = s1.length() - 1;
    while (lo <= hi)
    {
        if (s1[lo] != s1[hi])
        {
            return false;
        }
        lo++;
        hi--;
    }
    return true;
}

int main()
{
    string s = "N2 i&nJA?a& jnI2n";
    cout << checkPalindrome(s) << endl;
    return 0;
}