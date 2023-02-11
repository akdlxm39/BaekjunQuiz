#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, g;
	int arr[101];
	set<int> s;

	cin >> n;
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	g = arr[1] - arr[0];
	for (int i = 2;i < n;++i) {
		g = gcd(g, arr[i] - arr[i - 1]);
	}
	for (int i = 1;i * i <= g;++i) {
		if (g % i == 0) {
			s.insert(i);
			s.insert(g / i);
		}
	}
	s.erase(s.begin());
	for (int i : s) {
		cout << i << ' ';
	}
	return 0;
}