#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long power(long long a, long long b) {
	if (b == 1)
		return a;
	else {
		long long tmp = power(a, b / 2);
		tmp = tmp * tmp % MOD;
		if (b % 2)
			tmp = tmp * a % MOD;
		return tmp;
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	long long n, k, a = 1, b = 1;

	cin >> n >> k;
	k = min(k, n - k);

	for (int i = 1; i <= k; ++i) {
		a = a * (n - i + 1) % MOD;
		b = b * i % MOD;
	}

	long long r = (a * power(b, MOD - 2)) % MOD;
	cout << r;
	return 0;
}