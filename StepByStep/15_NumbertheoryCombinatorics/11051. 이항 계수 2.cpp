#include<bits/stdc++.h>

using namespace std;

#define MOD 10007

int mod_exp(int n, int e, int mod) {
	int result = 1;
	int b = n;
	while (e) {
		if (e & 1) {
			result = (result * b) % 10007;
		}
		b = b * b % 10007;
		e >>= 1;
	}
	return result;
}

int fac(int n, int mod) {
	if (n <= 1) return 1;
	else return (n * fac(n - 1, mod)) % mod;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int a = fac(n, MOD);
	int b = (fac(n - k, MOD) * fac(k, MOD)) % MOD;
	int r = (a * mod_exp(b, MOD - 2, MOD)) % MOD;
	cout << r;
	return 0;
}