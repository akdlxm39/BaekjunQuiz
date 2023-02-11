#include<bits/stdc++.h>

using namespace std;

bool prime_check[11];

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

    int n, x = 2;;
    cin >> n;

    while (n != 1) {
        if (n % x == 0) {
            n /= x;
            cout << x << '\n';
        }
        else 
            ++x;
    }
    return 0;
}