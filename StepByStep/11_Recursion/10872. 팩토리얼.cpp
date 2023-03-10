#include<iostream>

using namespace std;

int fac(int n) {
    if (n <= 1) return 1;
    return n * fac(n - 1);
}

int main() {
   	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    cout << fac(n);
    return 0;
}