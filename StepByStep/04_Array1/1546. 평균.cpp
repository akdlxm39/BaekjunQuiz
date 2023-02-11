#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n;
	float M = 0, ans = 0;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (M < arr[i]) M = arr[i];
	}
	for (int i = 0; i < n; ++i) {
		ans += arr[i] / M * 100;
	}
	cout << ans / n << '\n';
	delete[] arr;
	return 0;
}