#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int X, N;
    cin >> X >> N;
    while (N--) {
        int a, b;
        cin >> a >> b;
        X -= a * b;
    }
    if (X == 0) cout << "Yes";
    else cout << "No";

    return 0;
}