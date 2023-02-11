#include<bits/stdc++.h>

using namespace std;

int w[10001];
int dp[10001][3];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0;i < n;++i) {
        cin >> w[i];
    }
    if (n == 1) {
        cout << w[0];
    }
    else {
        dp[0][0] = w[0];
        dp[1][0] = w[1];
        dp[1][1] = w[0] + w[1];
        dp[2][0] = w[0] + w[2];
        dp[2][1] = w[1] + w[2];
        for (int i = 3;i < n;++i) {
            dp[i][1] = dp[i - 1][0] + w[i];
            dp[i][0] = max({ dp[i - 2][0], dp[i - 2][1] , dp[i - 3][0],dp[i - 3][1] }) + w[i];
        }
        
        cout << max(max(dp[n - 1][0], dp[n - 1][1]), max(dp[n - 2][0], dp[n - 2][1]));
    }
    return 0;
}