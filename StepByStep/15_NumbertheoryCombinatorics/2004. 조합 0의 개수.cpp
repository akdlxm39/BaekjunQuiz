#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	long long n, m, cnt2 = 0, cnt5 = 0;
	cin >> n >> m;
	for (long long i = 5;i <= n;i *= 5) {
		cnt5 += n / i;
		cnt5 -= (n - m) / i;
		cnt5 -= m / i;
	}
	for (long long i = 2;i <= n;i *= 2) {
		cnt2 += n / i;
		cnt2 -= (n - m) / i;
		cnt2 -= m / i;
	}
	cout << min(cnt2, cnt5);
	return 0;
}