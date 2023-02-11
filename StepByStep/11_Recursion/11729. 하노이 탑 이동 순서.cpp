#include<iostream>

using namespace std;

void hanoi(int n, int from, int by, int to) {
	if (n == 1) {
		cout << from << " " << to << "\n";
		return;
	}
	hanoi(n - 1, from, to, by);
	cout << from << " " << to << "\n";
	hanoi(n - 1, by, from, to);
	
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, pow=1;
	cin >> n;
	for (int i = 0; i < n; i++)
		pow *= 2;
	cout << pow - 1 << "\n";
	hanoi(n, 1, 2, 3);
	return 0;
}