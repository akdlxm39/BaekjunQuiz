#include<bits/stdc++.h>

using namespace std;

short arr[500001];
short temp[500001];
int cnt[8002];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, a1 = 0, a2 = 0, a3 = 0, a4 = 0, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		cnt[arr[i] + 4000]++;
	}
	sort(arr, arr + n);

	int max = 0, c = 0;
	for (int i = 0; i < 8001; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			a3 = i;
			c = 0;
		}
		else if (max == cnt[i] && c < 1) {
			a3 = i;
			c++;
		}
	}

	a1 = round(double(sum) / n);
	a2 = arr[n / 2];
	a3 = a3 - 4000;
	a4 = arr[n - 1] - arr[0];

	cout << a1 << '\n' << a2 << '\n' << a3 << '\n' << a4;
	return 0;
}