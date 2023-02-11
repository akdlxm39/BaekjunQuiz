#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int t;
	vector<int> v;
	cin >> t;
	while (t--) {
		int n, ans = 1;
		set<string> s;
		map<string, int> wearCount;
		cin >> n;
		for (int i = 0;i < n;++i) {
			string wear, kind;
			cin >> wear >> kind;
			if (binary_search(s.begin(), s.end(), kind)) {
				wearCount[kind]++;
			}
			else {
				s.insert(kind);
				wearCount[kind] = 1;
			}
		}
		if (s.size() == 1) {
			ans = wearCount[*s.begin()];
		}
		else {
			for (string i : s) {
				ans *= wearCount[i] + 1;
			}
			ans -= 1;
		}
		v.push_back(ans);
	}
	for (int i : v) {
		cout << i << '\n';
	}
	return 0;
}