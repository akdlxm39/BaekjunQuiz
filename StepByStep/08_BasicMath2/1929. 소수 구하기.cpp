#include<bits/stdc++.h>

using namespace std;

bool prime_check[1000001];

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

    int n, m;;
    cin >> m >> n;
    eratos(n);

    for (int i = m; i <= n; ++i) {
        if (prime_check[i])
            cout << i << '\n';
    }
    return 0;
}