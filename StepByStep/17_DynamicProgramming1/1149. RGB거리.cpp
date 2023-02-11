#include<bits/stdc++.h>

using namespace std;

int dp[1001][3]; //r=0, g=1, b=2

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
    for (int i = 1;i < n;i++) {
        int r, g, b;
        cin >> r >> g >> b;
        dp[i][0] = min(dp[i - 1][1] + r, dp[i - 1][2] + r);
        dp[i][1] = min(dp[i - 1][0] + g, dp[i - 1][2] + g);
        dp[i][2] = min(dp[i - 1][0] + b, dp[i - 1][1] + b);
    }
    cout << min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
    return 0;
}