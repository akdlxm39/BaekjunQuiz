#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int k, start = 0;
	int len[6], idx[6];
	bool chk[5] = { false };
	cin >> k;
	for (int i = 0;i < 6;++i) {
		cin >> idx[i] >> len[i];
		chk[idx[i]] = !chk[idx[i]];
	}
	for (int i = 0;i < 6;++i) {
		if (chk[idx[i]] && chk[idx[(i + 1) % 6]]) {
			start = i;
		}
	}
	int large = len[start] * len[(start + 1) % 6];
	int small = len[(start + 3) % 6] * len[(start + 4) % 6];
	cout << k * (large - small);
	return 0;
}