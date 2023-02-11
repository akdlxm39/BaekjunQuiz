#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int t, ans;
	cin >> t;
	while (t--) {
		ans = 0;
		int x, y;
		cin >> x >> y;
		int dis = y - x;
		if (dis == 1) ans = 1;
		else if (dis == 2)ans = 2;
		else {
			dis -= 2;
			for (int i = 2;; ++i) {
				if ((dis -= i) <= 0) {
					ans = i * 2 - 1;
					break;
				}
				if ((dis -= i) <= 0) {
					ans = i * 2;
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

/*
1	1
2	1	1
3	1	1	1
4	1	2	1
5	1	2	1	1
6	1	2	2	1
7	1	2	2	1	1
8	1	2	2	2	1
9	1	2	3	2	1
10	1	2	3	2	1	1
11	1	2	3	2	2	1
12	1	2	3	3	2	1
13	1	2	3	3	2	1	1
14	1	2	3	3	2	2	1
15	1	2	3	3	3	2	1
16	1	2	3	4	3	2	1
17	1	2	3	4	3	2	1	1
18	1	2	3	4	3	2	2	1
19	1	2	3	4	3	3	2	1
20	1	2	3	4	4	3	2	1
21	1	2	3	4	4	3	2	1	1
22	1	2	3	4	4	3	2	2	1
23	1	2	3	4	4	3	3	2	1
24	1	2	3	4	4	4	3	2	1
25	1	2	3	4	5	4	3	2	1
*/