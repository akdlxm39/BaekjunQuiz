#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int i, price, price1 = 2000, price2 = 2000;
	i = 3;
	while (i--) {
		cin >> price;
		if (price < price1) price1 = price;
	}
	i = 2;
	while (i--) {
		cin >> price;
		if (price < price2) price2 = price;
	}
	cout << price1 + price2 - 50 << '\n';
	return 0;
}