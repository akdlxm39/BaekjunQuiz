#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, i = 0;
	cin >> n;
	int tmp = n;
	do {
		if (tmp < 10)
			tmp = (tmp * 10) + tmp;
		else
			tmp = (tmp % 10) * 10 + ((tmp % 10) + (tmp / 10)) % 10;
		++i;
	} while (tmp!=n);
	cout << i << '\n';
	return 0;
}