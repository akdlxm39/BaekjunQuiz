#include<bits/stdc++.h>

using namespace std;

vector<string> v;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	string str;
	cin >> str;
	str[1];
	for (int cnt = 1;cnt <= str.length();++cnt)
		for (int pos = 0;pos <= str.length() - cnt;++pos)
			v.push_back(str.substr(pos, cnt));
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();
	return 0;
}