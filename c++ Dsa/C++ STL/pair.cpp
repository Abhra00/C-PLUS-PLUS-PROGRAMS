#include<bits/stdc++.h>
using namespace std;
int main() {
	pair<int, int> p = {1, 2};
	cout << p.first << " " << p.second << endl;
	// Nesting of pair
	pair<int, pair<int, int>> b = {1, {45, 69}};
	cout << b.first << " " << b.second.second << " " << b.second.first << endl;
	// Pair type array
	pair<int, int> arr[] = {{1,2}, {2,3}, {3,4}};
	cout << arr[1].second << endl;
	return 0;
}