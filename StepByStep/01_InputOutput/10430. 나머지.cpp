#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b) % c << '\n' << ((a%c) + (b%c)) % c << '\n';
	cout << (a*b) % c << '\n' << ((a%c)*(b%c)) % c << '\n';
	return 0;
}