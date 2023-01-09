#include<bits/stdc++.h>
using namespace std;
bool check(string str, string pattern) {
    int idx = 0;
    int capCount = 0;
    for(int i = 0; i < str.length(); i++) {
        if(idx < pattern.length() && str[i] == pattern[idx]) {
            idx++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            capCount++;
        }
    }

    return (idx == pattern.length() && capCount == 0);
}
vector<bool> camelMatch(vector<string>& queries, string pattern) {
    int n = queries.size();
    vector<bool> ans;
    for(int i = 0; i < n; i++) {
        if(check(queries[i], pattern)) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    } 
    return ans;  
}

int main() {
    vector<string> queries = {"FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"};
    string pattern = "FB";
    vector<bool> ans(camelMatch(queries, pattern));
    cout << boolalpha << endl;
    for(auto val : ans) {
        cout << val << " ";
    }
    cout << noboolalpha;
    cout << endl;
    return 0;
}