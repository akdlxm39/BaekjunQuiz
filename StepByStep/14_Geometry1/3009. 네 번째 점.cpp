#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int x[4], y[4];
	for (int i = 1;i <= 3;++i)
		cin >> x[i] >> y[i];
	if (x[1] == x[2]) x[0] = x[3];
	else x[0] = x[1] + x[2] - x[3];
	if (y[1] == y[2]) y[0] = y[3];
	else y[0] = y[1] + y[2] - y[3];

	cout << x[0] << ' ' << y[0];
	return 0;
}