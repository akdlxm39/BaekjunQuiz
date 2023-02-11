#include<bits/stdc++.h>

using namespace std;

int tri[501][501];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1;j <= i;++j) {
            cin >> tri[i][j];
        }
    }
    for (int i = n - 1;i >= 1;--i) {
        for (int j = 1; j <= n;++j) {
            tri[i][j] += max(tri[i + 1][j], tri[i + 1][j + 1]);
        }
    }
    cout << tri[1][1];
    return 0;
}