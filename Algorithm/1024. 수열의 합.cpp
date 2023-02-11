#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, L; cin >> N >> L;

    for (int n = L; n <= 100;++n) {
        int a;
        int S = N;
        S *= 2;
        if (S % n == 0) {
            S /= n;
            S -= n - 1;
            if (S % 2 == 0) {
                a = S / 2;
                for (int i = 0;i < n;++i) {
                    cout << a + i << ' ';
                }
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}