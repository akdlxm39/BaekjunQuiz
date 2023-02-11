#include<bits/stdc++.h>

using namespace std;

queue<int> q;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    bool b = true;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        q.push(i);
    while (q.size() != 1) {
        if (b) {
            q.pop();
            b = !b;
        }
        else {
            q.push(q.front());
            q.pop();
            b = !b ;
        }
    }
    cout << q.front();
    return 0;
}