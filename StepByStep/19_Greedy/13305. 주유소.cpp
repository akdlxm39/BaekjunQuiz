#include<bits/stdc++.h>

using namespace std;

unsigned int len[100001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    unsigned long long ans = 0;
    cin >> n;
    for (int i = 0;i < n - 1;++i) {
        cin >> len[i];
    }
    int i = 0;
    do {
        static long long price = 1000000000;
        long long p;
        cin >> p;
        price = min(price, p);
       
        ans += len[i++] * price;
    } while (i < n - 1);
    cout << ans;
    return 0;
}