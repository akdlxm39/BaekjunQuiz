#include<bits/stdc++.h>

using namespace std;

bool prime_check[300000];

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

    eratos(250000);
    
    int n, cnt = 0;
    cin >> n;
    while (n != 0) {
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (prime_check[i]) cnt++;
        }
        cout << cnt << '\n';

        cnt = 0;
        cin >> n;
    }
    return 0;
}