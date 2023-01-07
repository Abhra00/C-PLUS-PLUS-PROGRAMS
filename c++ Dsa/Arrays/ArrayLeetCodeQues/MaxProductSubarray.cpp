#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int arr[], int size) {

	int ans = arr[0];

	int maxi = ans;

	int mini = ans;

	for(int i = 1; i < size; i++) {

		if(arr[i] < 0) {
			swap(maxi, mini);
		}

		maxi = max(arr[i], maxi*arr[i]);
		mini = min(arr[i], mini*arr[i]);

		ans = max (maxi, ans);
	}
	return ans;
}

int main() {
	int size = 4;

	int *arr = new int[size];

	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << "The maximum subarray product is:->" << maxSubarrayProduct(arr, size) << endl;
	return 0;
}