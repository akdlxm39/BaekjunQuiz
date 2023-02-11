#include<bits/stdc++.h>

using namespace std;

int st[10001];
int iter;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string str; 
        cin >> str;
        if (str == "push") {
            int x; 
            cin >> x;
            st[iter++] = x;
        }
        else if (str == "pop") {
            if (iter) cout << st[--iter] << '\n';
            else cout << -1 << '\n';
        }
        else if (str == "size") {
            cout << iter << '\n';
        }
        else if (str == "empty") {
            cout << (iter ? 0 : 1) << '\n';
        }
        else if (str == "top") {
            if (iter) cout << st[iter - 1] << '\n';
            else cout << -1 << '\n';
        }
    }
    return 0;
}