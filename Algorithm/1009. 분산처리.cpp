#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int ans = 1;
		if (a % 10 == 0) ans = 10;
		else {
			b %= 4;
			if (b == 0) b = 4;
			while (b--) ans *= a;
			ans %= 10;
		}
		cout << ans << '\n';
	}
	return 0;
}