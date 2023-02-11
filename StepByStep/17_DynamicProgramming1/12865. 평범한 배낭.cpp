#include<bits/stdc++.h>

using namespace std;

struct Item {
    int w;
    int v;
} item[101];
int dp[101][100001];

int knap(int i, int x) {
    if (dp[i][x] != 0 || i == 0) return dp[i][x];
    if (item[i].w <= x) {
        return dp[i][x] = max(knap(i - 1, x), knap(i - 1, x - item[i].w) + item[i].v);
    }
    else {
        return dp[i][x] = knap(i - 1, x);
    }
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, W;
    cin >> n >> W;
    for (int i = 1;i <= n;++i) {
        cin >> item[i].w >> item[i].v;
    }

    cout << knap(n, W);
    return 0;
}