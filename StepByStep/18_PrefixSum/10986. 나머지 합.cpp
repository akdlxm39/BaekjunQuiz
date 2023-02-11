#include<bits/stdc++.h>

using namespace std;

long long cnt[1001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, m, sum = 0;
    long long ans = 0;
    cin >> n >> m;
    for (int i = 0;i < n;++i) {
        int A;
        cin >> A;
        sum = (sum + A % m) % m;
        cnt[sum]++;
    }
    cnt[0]++;
    for (int i = 0;i < m;++i) {
        if (cnt[i] >= 2)
            ans += cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << ans;
    return 0;
}