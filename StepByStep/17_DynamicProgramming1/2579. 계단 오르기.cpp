#include<bits/stdc++.h>

using namespace std;

int dp[301][2];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    cin >> dp[0][0] >> dp[1][0];
    dp[1][1] = dp[0][0] + dp[1][0];
    for (int i = 2; i < n; ++i) {
        int x;
        cin >> x;
        dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + x;
        dp[i][1] = dp[i - 1][0] + x;
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]);
    return 0;
}