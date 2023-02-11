#include<bits/stdc++.h>

using namespace std;

queue<pair<int, int>> q;
priority_queue<int> pq;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t, n, m, x, ans = 1;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            q.push({ i,x });
            pq.push(x);
        }
        while (!q.empty()) {
            if (q.front().first == m && q.front().second == pq.top()) {
                cout << ans << '\n';
                break;
            }
            else if (q.front().second == pq.top()) {
                q.pop();
                pq.pop();
                ans++;
            }
            else {
                q.push({ q.front().first, q.front().second });
                q.pop();
            }
        }
        q = queue<pair<int, int>>();
        pq = priority_queue<int>();
        ans = 1;
    }
    return 0;
}