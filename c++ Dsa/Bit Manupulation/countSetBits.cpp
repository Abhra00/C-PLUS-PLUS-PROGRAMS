#include<bits/stdc++.h>
using namespace std;
int countSetbits(int n) {
    int count = 0;
    while(n != 0) {
        if(n & 1 == 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << countSetbits(n) << endl;
    return 0;
}