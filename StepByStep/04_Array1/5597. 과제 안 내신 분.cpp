#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    bool arr[31];
    memset(arr, true, 31);
    for (int i = 0;i < 28;++i) {
        int x; cin >> x;
        arr[x] = false;
    }
    for (int i = 1;i <= 30;++i)
        if (arr[i]) cout << i << '\n';

    return 0;
}