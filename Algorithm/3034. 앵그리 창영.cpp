#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int n, w, h;
	
	cin >> n >> w >> h;
	double l = sqrt(w * w + h * h);
	while (n--) {
		int a;
		cin >> a;
		if (a <= l) cout << "DA\n";
		else cout << "NE\n";
	}
	return 0;
}