#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	
	int n, tmp, count = 0;
	string str;
	cin >> n;
	while (n--) {
		int chk[27] = { 0 };
		tmp = 26;
		cin >> str;
		for (auto s : str) {
			if (tmp != (s-'a')) {
				if (chk[s - 'a'] == 0) {
					chk[tmp] = 1;
					tmp = s - 'a';
				}
				else {
					count -= 1;
					break;
				}
			}
		}
		count += 1;
	}
	cout << count << '\n';
	return 0;
}