#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, ans;
	cin >> n;
	for (ans = n / 5; ans >= 0; --ans) {
		if ((n - ans * 5) % 3 == 0) {
			ans += (n - ans * 5) / 3;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}