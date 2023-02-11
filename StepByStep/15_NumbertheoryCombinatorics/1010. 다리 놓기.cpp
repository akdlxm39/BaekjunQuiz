#include<bits/stdc++.h>

using namespace std;

int c[31][31];

int getC(int n, int k) {
	if (c[n][k]) return c[n][k];
	else if (c[n][n - k]) return c[n][k] = c[n][n - k];
	else if (n == k || k == 0) return c[n][k] = 1;
	else return c[n][k] = getC(n - 1, k) + getC(n - 1, k - 1);
}

int main() {
	return 0;

	int t;
	vector<int> v;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		v.push_back(getC(m, n));
	}
	for (int i : v)
		cout << i << '\n';
	return 0;
}