#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, m, ans;
	cin >> n >> m;
	ans = n + m;
	for (int i = 0;i < n;++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = 0;i < m;++i) {
		int b;
		cin >> b;
		ans -= 2 * binary_search(v.begin(), v.end(), b);
	}
	cout << ans;
	return 0;
}