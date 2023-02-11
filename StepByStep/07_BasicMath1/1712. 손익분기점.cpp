#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	long long a, b, c, ans;
	cin >> a >> b >> c;
	if (c <= b) ans = -1;
	else ans = a / (c - b) + 1;
	cout << ans << '\n';
	return 0;
}
