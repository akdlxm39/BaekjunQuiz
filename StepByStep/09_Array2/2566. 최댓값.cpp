#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int arr[10][10];
    for (int i = 1;i < 10;++i)
        for (int j = 1;j <= 9;++j)
            cin >> arr[i][j];
    int x, y, M = -1;
    for (int i = 1;i <= 9;++i)
        for (int j = 1;j <= 9;++j)
            if (arr[i][j] > M) {
                x = i;
                y = j;
                M = arr[i][j];
            }
    cout << M << '\n' << x << ' ' << y;

    return 0;
}