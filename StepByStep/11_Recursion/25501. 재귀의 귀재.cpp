#include<bits/stdc++.h>

using namespace std;
/*
int recursion(string s, int l, int r, int& cnt) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, cnt);
}

int isPalindrome(string s, int& cnt) {
    return recursion(s, 0, s.size() - 1, cnt);
}
*/
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        int len = s.length();
        int cnt = 1;
        // int ans = isPalindrome(s, cnt);
        int ans = 1;
        for (int i = 0; i < len / 2; ++i){
            cnt++;
            if(s[i] != s[len - i - 1]){
                ans = 0;
                cnt--;
                break;
            }
        }

        cout << ans << ' ' << cnt << '\n';
    }
    return 0;
}