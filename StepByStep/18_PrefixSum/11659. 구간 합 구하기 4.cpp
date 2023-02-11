#include<bits/stdc++.h>

using namespace std;

long long sum[100001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= n;++i) {
        int x;
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }
    while (m--) {
        int i, j;
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << '\n';
    }
    return 0;
}