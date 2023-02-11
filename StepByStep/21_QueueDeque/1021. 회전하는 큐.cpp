#include<bits/stdc++.h>

using namespace std;

deque<int> dq;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


    int n, m, x, ans = 0, tmp = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        dq.push_back(i);
    while (m--) {
        cin >> x;
        while (dq.front() != x) {
            dq.push_back(dq.front());
            dq.pop_front();
            tmp++;
        }
        
        ans += min(tmp, (int)dq.size() - tmp);
        dq.pop_front();
        
        tmp = 0;
    }
    cout << ans;
    return 0;
}