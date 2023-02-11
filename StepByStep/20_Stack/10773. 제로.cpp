#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int k;
    cin >> k;
    while (k--) {
        string str;
        cin >> str;
        int state = 0;
        for (char x : str) {
            if (x == '(') state++;
            else if (x == ')') state--;
            if (state < 0) break;
        }
        if (state) cout << "NO\n";
        else cout << "YES\n";
    }
}