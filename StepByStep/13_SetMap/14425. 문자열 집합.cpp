#include<bits/stdc++.h>

using namespace std;

map<string, bool> arr;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, m, ans = 0;
	cin >> n >> m;
	for (int i = 0;i < n;++i) {
		string str;
		cin >> str;
		arr[str] = true;
	}
	
	for (int i = 0;i < m;++i) {
		string temp;
		cin >> temp;
		if (int(arr[temp])) ans++;
	}
	cout << ans;
	return 0;
}