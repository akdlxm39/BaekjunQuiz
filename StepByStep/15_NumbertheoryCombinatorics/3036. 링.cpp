#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, first, ans1, ans2;
	int arr[101];
	set<int> s;

	cin >> n;
	cin >> first;
	for (int i = 1;i < n;i++) {
		int now, g;
		cin >> now;
		g = gcd(first, now);
		cout << first / g << '/' << now / g << '\n';
	}
	return 0;
}