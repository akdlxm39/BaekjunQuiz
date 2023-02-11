#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int w, h, x, y, p, ans = 0;
    cin >> w >> h >> x >> y >> p;
    double r = (double)h / 2;
    while (p--) {
        int a, b;
        cin >> a >> b;
        if (x <= a && a <= x + w && y <= b && b <= y + h) ans++;
        else {
            if (x + w < a) a -= w;
            b -= r;
            double l = sqrt((x - a) * (x - a) + (y - b) * (y - b));
            if (l <= r) ans++;
        }
    }
    cout << ans;
    return 0;
}