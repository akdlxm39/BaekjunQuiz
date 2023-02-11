#include<bits/stdc++.h>

using namespace std;

int paper[150][150];
int ans[2];

bool isMono(int x, int y, int l) {
    int color = paper[x][y];
    for (int i = x; i < x + l; ++i)
        for (int j = y; j < y + l; ++j)
            if (paper[i][j] != color)
                return false;
    return true;
}

void cut(int x, int y, int l) {
    if (isMono(x, y, l)) {
        ans[paper[x][y]]++;
        return;
    }
    else {
        l /= 2;
        cut(x, y, l);
        cut(x + l, y, l);
        cut(x, y + l, l);
        cut(x + l, y + l, l);
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> paper[i][j];

    cut(0, 0, n);
    cout << ans[0] << '\n' << ans[1];
    return 0;
}