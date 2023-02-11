#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == 'c')
			if (str[i + 1] == '-' || str[i + 1] == '=')
				i += 1;
		if (str[i] == 'd') {
			if (str[i + 1] == '-')
				i += 1;
			else if (str[i + 1] == 'z'&&str[i + 2] == '=')
				i += 2;
		}
		if (str[i] == 'l')
			if (str[i + 1] == 'j')
				i += 1;
		if (str[i] == 'n')
			if (str[i + 1] == 'j')
				i += 1;
		if (str[i] == 's')
			if (str[i + 1] == '=')
				i += 1;
		if (str[i] == 'z')
			if (str[i + 1] == '=')
				i += 1;
		count += 1;
	}
	cout << count << '\n';
	return 0;
}