#include<bits/stdc++.h>
using namespace std;

bool canTransform(string start, string end) {
        vector<pair<char, int>> v1;
        vector<pair<char, int>> v2;
        int n = start.size();
        for(int i = 0; i < n; i++) {
            if(start[i] != 'X') {
                v1.push_back({start[i], i});
            }
            if(end[i] != 'X') {
                v2.push_back({end[i], i});
            }
        }
        
        if(v1.size() != v2.size()) {
            return false;
        }

        bool temp = true;
        for(int i = 0; i < v1.size(); i++) {
            if(v1[i].first == 'L' && v2[i].first == 'L') {
                if(v1[i].second < v2[i].second) {
                    temp = false;
                }
            } else if (v1[i].first == 'R' && v2[i].first == 'R') {
                if(v1[i].second > v2[i].second) {
                    temp = false;
                }
            } else {
                temp = false;
            }
        }

        return temp;
    }

int main() {
    string start = "RXXLRXRXL";
    string end = "XRLXXRRLX";
    canTransform(start, end) == 1 ? cout << "yes" : cout << "no";
    cout << endl;
    return 0;
}