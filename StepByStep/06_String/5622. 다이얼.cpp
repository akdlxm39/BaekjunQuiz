#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int time = 0;
	string str;
	cin >> str;
	for (auto s : str) {
		if (s <= 'C') time += 3;
		else if (s <= 'F') time += 4;
		else if (s <= 'I') time += 5;
		else if (s <= 'L') time += 6;
		else if (s <= 'O') time += 7;
		else if (s <= 'S') time += 8;
		else if (s <= 'V') time += 9;
		else if (s <= 'Z') time += 10;
	}
	cout << time << '\n';
	return 0;
}