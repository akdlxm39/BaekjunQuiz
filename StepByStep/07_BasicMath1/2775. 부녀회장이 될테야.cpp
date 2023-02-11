#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int t, k, n, ans;
	cin >> t;
	while (t--) {
		ans = 1;
		cin >> k >> n;
		if (n == 1) ans = 1;
		else {
			for (int i = 0; i < k + 1; ++i)
				ans = ans * (n + k - i) / (i + 1);
		}
		cout << ans << '\n';
	}
	return 0;
}