#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, max_ = 0, min_=INT_MAX;
	cin >> n;

	for (int i = 0;i < n;++i) {
		int a;
		cin >> a;
		max_ = max(max_, a);
		min_ = min(min_, a);
	}
	cout << max_ * min_;
	return 0;
}