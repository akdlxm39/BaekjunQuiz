#include<bits/stdc++.h>

using namespace std;

int paper[2200][2200];
int ans[3];

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
        l /= 3;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cut(x + i * l, y + j * l, l);
            }
        }
        return;
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> paper[i][j];
            paper[i][j]++;
        }
    }

    cut(0, 0, n);
    cout << ans[0] << '\n' << ans[1] << '\n' << ans[2];
    return 0;
}