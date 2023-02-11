#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int t, n, h, w, room;
	cin >> t;
	while (t--) {
		cin >> h >> w >> n;
		if (n%h == 0) room = h * 100 + n / h;
		else room = n % h * 100 + n / h + 1;
		cout << room << '\n';
	}
	return 0;
}