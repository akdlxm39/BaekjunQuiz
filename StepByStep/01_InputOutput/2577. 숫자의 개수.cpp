#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int x, mul = 1, i = 3, num[10] = { 0 };
	while (i--) {
		cin >> x;
		mul *= x;
	}
	do {
		num[mul % 10] += 1;
		mul /= 10;
	} while (mul >= 10);
	num[mul] += 1;
	for (int i = 0; i < 10; ++i)
		cout << num[i] << '\n';
	return 0;
}