#include<bits/stdc++.h>

using namespace std;

deque<int> dq;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    
    int t, n, tmp = 0;
    string p, x;
    bool r = false, e = false;
    cin >> t;
    while (t--) {
        cin >> p >> n >> x;
        if(n)
            for (char c : x) {
                if (c >= '0' && c <= '9') {
                    tmp *= 10;
                    tmp += c - '0';
                }
                else if (c == ',' || c == ']') {
                    dq.push_back(tmp);
                    tmp = 0;
                }
            }
        for (char c : p) {
            if (c == 'R') 
                r = !r;
            else if (c == 'D') {
                if (dq.empty()) {
                    e = true;
                    break;
                }
                else if (r) {
                    dq.pop_back();
                }
                else {
                    dq.pop_front();
                }
            }
        }
        if (e)
            cout << "error\n";
        else {
            cout << '[';
            if (r) {
                while (dq.size() > 1) {
                    cout << dq.back() << ',';
                    dq.pop_back();
                }
                if (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                }
            }
            else {
                while (dq.size() > 1) {
                    cout << dq.front() << ',';
                    dq.pop_front();
                }
                if (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                }
            }
            cout << "]\n";
        }
        r = e = false;
    }
    return 0;
}