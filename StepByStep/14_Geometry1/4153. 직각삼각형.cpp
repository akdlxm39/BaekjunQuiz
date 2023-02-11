#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	while (a + b + c) {
		a *= a;
		b *= b;
		c *= c;
		if (a + b == c || a + c == b || b + c == a) cout << "right\n";
		else cout << "wrong\n";
		cin >> a >> b >> c;
	}
	return 0;
}