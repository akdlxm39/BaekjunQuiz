#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int i = 5, ans = 0, score;
	while (i--) {
		cin >> score;
		if (score < 40) ans += 40;
		else ans += score;
	}
	cout << ans / 5 << '\n';
	return 0;
}