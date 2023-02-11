#include<bits/stdc++.h>

using namespace std;

int fac(int n) {
	if (n <= 1) return 1;
	else return n * fac(n - 1);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	cout << fac(n) / fac(n - k) / fac(k);
	return 0;
}