#include<bits/stdc++.h>

using namespace std;

int dp[100001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    cin >> dp[0];
    for (int i = 1;i < n;i++) {
        int x;
        cin >> x;
        dp[i] = max(dp[i - 1] + x, x);
    }
    sort(dp, dp + n);
    cout << dp[n - 1];
    return 0;
}