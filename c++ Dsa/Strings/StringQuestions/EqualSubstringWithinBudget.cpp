#include<bits/stdc++.h>
using namespace std;

int equalSubstring(string s, string t, int maxCost) {
    int len = s.length();
    int cost = 0;
    int ans = 0;
    int head = 0;
    int tail = 0;
    while(head < len) {
        cost += abs(s[head] - t[head]);
        while(cost > maxCost) {
            cost -= abs(s[tail] - t[tail]);
            tail++;
        }
        ans = max(ans, head - tail + 1);
        head++;
    }
    return ans;
}

int main() {
    string s = "abc";
    string t = "bcd";
    int maxCost = 3;
    cout << equalSubstring(s, t, maxCost);
    return 0;
}