#include<bits/stdc++.h>

using namespace std;

int sum[100001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int ans = INT_MIN;
    for (int i = 1;i <= n;++i) {
        int x;
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }
    for (int i = m;i <= n;++i) {
        ans = max(ans, sum[i] - sum[i - m]);
    }
    cout << ans;
    return 0;
}