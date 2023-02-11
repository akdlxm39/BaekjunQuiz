#include<bits/stdc++.h>

using namespace std;

int dp[21][21][21];
int sol(int a, int b, int c) {
    if (dp[a][b][c] != 0) return dp[a][b][c];
    if (a < b && b < c) {
        return dp[a][b][c] = sol(a, b, c - 1) + sol(a, b - 1, c - 1) - sol(a, b - 1, c);
    }
    else {
        return dp[a][b][c] = sol(a - 1, b, c) + sol(a - 1, b - 1, c)
            + sol(a - 1, b, c - 1) - sol(a - 1, b - 1, c - 1);
    }

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    for (int i = 0;i <= 20;i++) 
        for (int j = 0;j <= 20;j++) {
            dp[0][i][j] = 1;
            dp[i][0][j] = 1;
            dp[i][j][0] = 1;
        }

    int a, b, c;
    cin >> a >> b >> c;
    while (a != -1 || b != -1 || c != -1) {
        int ans;
        if (a <= 0 || b <= 0 || c <= 0) ans = 1;
        else if (a > 20 || b > 20 || c > 20) ans = dp[20][20][20] = sol(20, 20, 20);
        else ans = dp[a][b][c] = sol(a, b, c);
        printf("w(%d, %d, %d) = %d\n", a, b, c, ans);
        cin >> a >> b >> c;
    }
    return 0;
}