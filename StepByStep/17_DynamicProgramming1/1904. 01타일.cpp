#include<bits/stdc++.h>

using namespace std;

int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2;i < 1000001;i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    int n;
    cin >> n;
    cout << dp[n];
    return 0;
}