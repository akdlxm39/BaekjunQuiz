#include<bits/stdc++.h>

using namespace std;

int A[501];
int B[101];
int dp[101];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;++i) {
        int left, right;
        cin >> left >> right;
        A[left] = right;
    }
    for (int j = 1, i = 1; i <= 500; ++i) {
        if (A[i]) B[j++] = A[i];
    }
    for (int i = 1;i <= n;++i) {
        int length = 0;
        for (int j = 1;j < i;++j) {
            if (B[j]<B[i] && dp[j]>length) length = dp[j];
        }
        dp[i] = length + 1;
        ans = max(ans, dp[i]);
    }
    cout << n - ans;
    return 0;
}