#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int v , a, b, ans = 1;
	cin >> a >> b >> v;
	v -= a;
	if (v % (a - b) == 0) v = v / (a - b);
	else v = v / (a - b) + 1;
	cout << v + 1 << '\n';
	return 0;
}