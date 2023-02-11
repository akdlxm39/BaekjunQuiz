#include<bits/stdc++.h>

using namespace std;

bool prime_check[10001];

void eratos(int n) {
    if (n <= 1) return;

    for (int i = 2; i <= n; ++i)
        prime_check[i] = true;

    for (int i = 2; i * i <= n; ++i)
        if (prime_check[i])
            for (int j = i * i; j <= n; j += i)
                prime_check[j] = false;
}

int main() {	
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    eratos(10000);

    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        m = n / 2;
        while (m != 1) {
            if (prime_check[m] && prime_check[n - m]) {
                cout << m << ' ' << n - m << '\n';
                break;
            }
            else --m;
        }
    }
    return 0;
}