#include<bits/stdc++.h>

using namespace std;

long long a, b, c;

long long power(long long a, long long b, long long c) {
    if (b == 1)
        return a;
    else if (b == 2)
        return (a * a) % c;
    else {
        long long tmp = power(a, b / 2, c) % c;
        tmp = tmp * tmp % c;
        if (b % 2)
            return tmp * a % c;
        else 
            return tmp;
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b >> c;
    a %= c;
    cout << power(a, b, c);
    return 0;
}