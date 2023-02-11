#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    bool arr[100][100] = { false };
    int N; cin >> N;
    while (N--) {
        int x, y; cin >> x >> y;
        for (int i = 0;i < 10;++i)
            for (int j = 0;j < 10;++j)
                arr[x + i][y + j] = true;
    }
    int cnt = 0;
    for (int i = 0;i < 100;++i)
        for (int j = 0;j < 100;++j)
            if (arr[i][j]) cnt++;
    cout << cnt;
    return 0;
}