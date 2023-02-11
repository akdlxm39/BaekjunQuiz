#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, cur = 1;
    stack<int> st;
    queue<int> q;
    vector<char> ans;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty()) {
        if (cur <= q.front()) {
            st.push(cur++);
            ans.push_back('+');
        }
        else if (!st.empty() && st.top() == q.front()) {
            st.pop();
            q.pop();
            ans.push_back('-');
        }
        else {
            cout << "NO\n";
            ans.clear();
            break;
        }
    }
    for (char c : ans) {
        cout << c << '\n';
    }
    return 0;
}