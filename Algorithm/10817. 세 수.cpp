#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int arr[3], i = 3;
	while (i--)
		cin >> arr[i];
	sort(arr, arr + 3);
	cout << arr[1];
	return 0;
}