#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v; 
	v.push_back(1);
	v.emplace_back(2); // faster than push_back
	cout << v[1] << endl;
	//Itretor
	vector<int> :: iterator it = v.begin();
	it++;
	cout << *(it) << endl;
	return 0;
}