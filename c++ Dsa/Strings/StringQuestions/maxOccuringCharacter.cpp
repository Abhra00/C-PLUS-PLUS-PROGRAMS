#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str) {
        // Your code here
    int freq[26] = {0};
    for(int i = 0; i < str.length(); i++) {
        int index = tolower(str[i]) - 'a';
        freq[index]++;
    }
    int maxi = 0;
    for(int i = 1; i < 26; i++) {
        if(freq[i] > freq[maxi]) {
            maxi = i;
        }
        if(freq[i] == freq[maxi]) {
            maxi = min(maxi, i);
        }
    }
    char ch = maxi + 'a';
    return ch;
}

int main() {
    string str = "template";
    cout << getMaxOccuringChar(str) << endl;
    return 0;
}