#include<bits/stdc++.h>

using namespace std;

int arr[150][150];
int ans[2];

bool isMono(int x, int y, int l) {
    int color = arr[x][y];
    for (int i = x; i < x + l; ++i)
        for (int j = y; j < y + l; ++j)
            if (arr[i][j] != color)
                return false;
    return true;
}

void comp(int x, int y, int l) {
    if (isMono(x, y, l)) {
        cout << arr[x][y];
        return;
    }
    else {
        cout << '(';
        l /= 2;
        comp(x, y, l);
        comp(x, y + l, l);
        comp(x + l, y, l);
        comp(x + l, y + l, l);
        cout << ')';
        return;
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        for (int j = 0; j < n; ++j) {
            char c;
            cin.get(c);
            arr[i][j] = c - '0';
        }
    } 

    comp(0, 0, n);
    return 0;
}