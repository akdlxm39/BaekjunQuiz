#include<bits/stdc++.h>

using namespace std;

int arr[500001];

int search(int a, int start, int end) {
	if (start > end)
		return 0;
	int mid = (start + end) / 2;
	if (a == arr[mid])
		return 1;
	else if (a < arr[mid])
		return search(a, start, mid - 1);
	else
		return search(a, mid + 1, end);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	cin >> n;
	for (int i = 0;i < n;++i)
		cin >> arr[i];
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0;i < m;++i) {
		int temp;
		cin >> temp;
		cout << search(temp, 0, n - 1) << ' ';
	}
	return 0;
}