#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        //! string res = "";
        //! string word = "";
        //! for(int i = 0; i < s.length(); i++) {
        //!     if(s[i] != ' ') {
        //!         word += char(s[i]);
        //!     }
        //!     if(s[i] == ' ') {
        //!         reverse(word.begin(), word.end());
        //!         word += " ";
        //!         res += word;
        //!         word = "";
        //!     }
        //! }
        //! reverse(word.begin(), word.end());
        //! word += " ";
        //! res += word; 
        //! res.erase(res.length() - 1);
        auto start = s.begin(), end = s.end(), curr = s.begin();
        while(curr <= end) {
            if(curr == end || *curr == ' ') {
                reverse(start, curr);
                start = curr + 1;
            }
            curr++;
        }

        return s;
    }
int main() {
    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl;
    return 0;
}