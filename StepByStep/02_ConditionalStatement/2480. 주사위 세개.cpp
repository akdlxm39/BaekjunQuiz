#include<bits/stdc++.h>

using namespace std;

int main() {
   	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int a, b, c, ans;
    cin >> a >> b >> c;
    if (a == b && a == c)
        ans = 10000 + 1000 * a;
    else if (a == b || a == c)
        ans = 1000 + 100 * a;
    else if (b == c)
        ans = 1000 + 100 * b;
    else
        ans = 100 * max(a, max(b, c));
    cout << ans;
    return 0;
}