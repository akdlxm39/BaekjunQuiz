#include<bits/stdc++.h>

using namespace std;

queue<int> q;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        q.push(i);

    cout << '<';
    while (q.size() != 1) {
        for (int i = 1; i < k; ++i) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << '>';
    return 0;
}