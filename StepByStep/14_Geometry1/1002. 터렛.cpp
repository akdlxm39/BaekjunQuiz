#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if (x1 == x1 && y1 == y2 && r1 == r2) cout << -1;
        else {
            double l = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            if (l > r1 + r2) cout << 0;
            else if (r1 > l + r2 || r2 > l + r1) cout << 0;
            else if (l == r1 + r2) cout << 1;
            else cout << 2;
        }
    }
    return 0;
}
