#include<bits/stdc++.h>

using namespace std;

int notSelfNumber[10001] = { 0 };

bool isSelfNumber(int n) {
	int ans = n, tmp = n;
	do {
		ans += tmp % 10;
		tmp /= 10;
	} while (tmp);
	notSelfNumber[ans] = 1;
	if (notSelfNumber[n]) return false;
	else return true;
}

int main() {
	for (int i = 1; i <= 10000; ++i) {
		if (isSelfNumber(i)) cout << i << '\n';
	}
	return 0;
}