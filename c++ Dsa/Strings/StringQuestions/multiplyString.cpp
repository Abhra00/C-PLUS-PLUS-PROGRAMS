#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    if(num1 == "0" || num2 == "0") {
        return "0";
    }
    int l1 = num1.size();
    int l2 = num2.size();
    int len = l1 + l2;
    int i = l1 - 1;
    vector<int> res(len, 0);
    int pf = 0;
    while(i >= 0) {
        int ival = num1[i] - '0';
        i--;
        int j = l2 - 1;
        int k = len - 1 + pf;
        int carry = 0;
        while(j >= 0 || carry != 0) {
            int jval = j >=0 ? num2[j] - '0': 0;
            j--;
            int prod = (ival * jval) + carry + res[k];
            res[k] = prod % 10;
            carry = prod / 10;
            k--;
        }
        pf--;
    }
    string ans = "";
    bool flag = false;
    for(int val : res) {
        if(val == 0 && flag == false) {
            continue;
        }
        flag = true;
        ans += ('0' + val);
    }
    return ans;
}

int main() {
    string n1 = "123";
    string n2 = "456";
    cout << multiply(n1, n2) << endl;
    return 0;
}