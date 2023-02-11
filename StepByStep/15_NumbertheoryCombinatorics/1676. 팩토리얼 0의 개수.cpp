#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, cnt5 = 0;
	cin >> n;
	for (int i = 5; i <= n;i += 5) {
		int temp = i;
		while (temp % 5 == 0) {
			temp /= 5;
			cnt5++;
		}
	}
	cout << cnt5;
	return 0;
}