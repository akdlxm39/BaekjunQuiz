#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int alpha[26];
	for (int i = 0; i < 26; ++i) alpha[i] = -1;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i)
		if (alpha[str[i] - 'a'] == -1)
			alpha[str[i] - 'a'] = i;
	for (int i = 0; i < 26; ++i) cout << alpha[i] << ' ';

	return 0;
}