#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, ans, x1 = 1, x2 = 1;
	cin >> n;
	for (ans = 1; ; ++ans) {
		if (n >= x1 && n <= x2) break;
		x1 = x2 + 1;
		x2 += ans * 6;
	}
	cout << ans << '\n';
	return 0;
}
