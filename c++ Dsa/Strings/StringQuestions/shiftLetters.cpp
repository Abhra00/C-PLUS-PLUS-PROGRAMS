#include<bits/stdc++.h>
using namespace std;

string shiftingLetters(string s, vector<int>& shifts) {
    int n = shifts.size();
    for(int i = n - 2; i >= 0; i--) {
        shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
    }
    for(int i = 0; i < s.size(); i++) {
        s[i] = (s[i] - 'a' + shifts[i]) % 26 + 'a';
    }
    return s;
}

int main() {
	string s = "abc";
	vector<int> shifts = {3,5,9};
	cout << shiftingLetters(s, shifts) << endl;
}