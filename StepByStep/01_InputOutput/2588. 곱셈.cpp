#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int a, b;
	cin >> a >> b;
	int tmp = b;
	cout << a * (tmp % 10) << '\n';
	tmp /= 10;
	cout << a * (tmp % 10) << '\n';
	tmp /= 10;
	cout << a * (tmp % 10) << '\n';
	cout << a * b << '\n';
	return 0;
}