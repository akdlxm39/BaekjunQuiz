#include<bits/stdc++.h>

using namespace std;

void star(int x, int row, int col) {
    if ((row / x) % 3 == 1 && (col / x) % 3 == 1) cout << ' ';
    else if (x == 1) cout << '*';
    else star(x / 3, row, col);
}

int main() {
   	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            star(n, i, j);
        }
        cout << '\n';
    }
    return 0;
}