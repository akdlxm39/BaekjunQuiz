#include<bits/stdc++.h>

using namespace std;

int f[41];
int a, b;

int fib(int n) {
    if (n == 1 or n == 2) {
        ++a;
        return 1;
    }
    return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; ++i) {
        ++b;
        f[i] = f[i - 1] + f[i - 2];
    }
        
    return f[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << a << ' ' << b;
    return 0;
}