#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
        int len = part.length();
        while(s.find(part) != string::npos) {
            s = s.erase(s.find(part), len);
        }
        return s;
    }
int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(str, part) << endl;
    return 0;
}