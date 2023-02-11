#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int x, n = 0;
	cin >> x;
	while (x > 0) {
		n++;
		x -= n;
	}
	if(n%2==0) cout << n + x << '/' << 1 - x << '\n';
	else cout << 1 - x << '/' << n + x << '\n';
	return 0;
}