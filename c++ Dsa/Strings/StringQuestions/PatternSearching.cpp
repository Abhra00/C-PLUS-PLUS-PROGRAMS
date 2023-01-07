#include<bits/stdc++.h>
using namespace std;

void findPattern(string str, string pattern) {
    int found = str.find(pattern);
    bool flag = false;
    while(found != string::npos) {
        flag = true;
        cout << found << endl;
        found = str.find(pattern, found + 1);
    }
    if(!flag) {
        cout << -1;
    }
}

int main() {
    string str = "geeksforgeeks";
    string pattern = "geek";
    findPattern(str, pattern);
    return 0;
}