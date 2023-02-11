#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int alpha[26] = { 0 };
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 'a'&&str[i] <= 'z')
			alpha[str[i] - 'a']++;
		else if (str[i] >= 'A'&&str[i] <= 'Z')
			alpha[str[i] - 'A']++;
	}
	int M = 0, M_;
	for (int i = 1; i < 26; ++i) {
		if (alpha[M] < alpha[i]) M = i;
		else if (alpha[M] == alpha[i]) M_ = M;
	}
	if (M == M_)
		cout << "?\n";
	else
		cout << (char)('A' + M) << '\n';

	return 0;
}