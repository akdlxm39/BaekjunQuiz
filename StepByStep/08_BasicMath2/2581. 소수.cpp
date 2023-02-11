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

    int n, m, sum = 0, minimum = -1;
    cin >> m >> n;
    eratos(10000);
    for (int i = m; i <= n; ++i) {
        if (prime_check[i]) {
            sum += i;
            if (minimum == -1) minimum = i;
        }
    }
    if (sum)
        cout << sum << '\n' << minimum;
    else
        cout << -1;
    return 0;
}