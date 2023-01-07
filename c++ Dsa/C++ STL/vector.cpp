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
	vector<int> vec(5,20);
	// printing vector
	for(vector<int> :: iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *(it) << " ";
	}

	cout << endl << "using auto" << endl;
	for(auto it : vec) {
		cout << it << " ";
	}

	//Erase
	vec.erase(vec.begin(), vec.begin() + 3);
	cout << endl << "After Erasing" << endl;
	for(auto it : vec) {
		cout << it << " ";
	}

	vector<int> v2 (2,200); // {200,200}
	v2.insert(v2.begin(),300); // {300,200,200};
	v2.insert(v2.begin() + 1, 5, -1); //{300, -1, -1, -1, -1, -1, 200, 200}
	cout << endl << "Insert Operation" << endl;
	for(auto it : v2) {
		cout << it << " ";
	}

	cout << endl << v2.front() << endl;
	return 0;
}