#include<bits/stdc++.h>

using namespace std;

int arr[1000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n,x;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < n; i++) {
		x = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
		cout << x << ' ';
	}
	return 0;
}