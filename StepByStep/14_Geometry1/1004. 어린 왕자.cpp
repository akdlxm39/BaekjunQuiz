#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    vector<int> v;
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2, c, ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> c;
        while (c--) {
            int x, y, r;
            cin >> x >> y >> r;
            double l1 = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
            double l2 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
            if (l1<r && l2>r || l1>r && l2<r) ans++;
        }
        v.push_back(ans);
    }
    for (int i : v) {
        cout << i << '\n';
    }
    return 0;
}