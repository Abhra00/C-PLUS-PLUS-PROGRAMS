#include<bits/stdc++.h>
using namespace std;

string rightTrimWhiteSpaces(string word) {
    int right = word.length() - 1;
    while(right >= 0) {
        if(word[right] != ' ') {
            break;
        }
        right--;
    }

    return word.substr(0, right + 1);
}

int getMax(vector<string>& words) {
    int maxLen = 0;
    for(auto word : words) {
        int len = word.length();
        maxLen = max(maxLen, len);
    }
    return maxLen;
}

vector<string> printVertically(string s) {
    s += " ";
    int n = s.length();
    vector<string> words;
    string str = "";
    for(int i = 0; i < n; i++) {
        if(s[i] == ' ') {
            words.push_back(str);
            str = "";
        } else {
            str += s[i];
        }
    }  
    int maxLenWord = getMax(words);
    vector<string> ans;
    for(int i = 0; i < maxLenWord; i++) {
        string temp = "";
        for(int j = 0; j < words.size(); j++) {
            if(i >= words[j].length()) {
                temp += " ";
            } else {
                temp += words[j][i];
            }
        }
        string trimmedWord = rightTrimWhiteSpaces(temp);
        ans.push_back(trimmedWord);
    }
    return ans;
}

int main() {
    string str = "HOW ARE YOU";
    vector<string> ans (printVertically(str));
    for(auto str : ans) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}