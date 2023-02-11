#include<bits/stdc++.h>

using namespace std;

int ans[1000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    stack<pair<int, int>> st;
    queue<int> q;
    

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty()) {
        if (!st.empty() && st.top().second < q.front()) {
            ans[st.top().first] = q.front();
            st.pop();
        }
        else {
            st.push({ n - q.size() ,q.front() });
            q.pop();
        }
    }
    while (!st.empty()) {
        ans[st.top().first] = -1;
        st.pop();
    }
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    return 0;
}