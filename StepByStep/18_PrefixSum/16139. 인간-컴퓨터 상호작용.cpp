#include<bits/stdc++.h>

using namespace std;

char str[200001];
short cnt[26][200001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin >> str;
    cnt[str[0] - 'a'][0] = 1;
    for (int i = 1;str[i] != NULL;++i) {
        int c = str[i] - 'a';
        for (int j = 0;j < 26;++j) {
            cnt[j][i] = cnt[j][i - 1];
        }
        cnt[c][i]++;
    }
    int q;
    cin >> q;
    while (q--) {
        char alpha;
        int l, r;
        cin >> alpha >> l >> r;
        int c = alpha - 'a';
        if (l > 0) cout << cnt[c][r] - cnt[c][l - 1] << '\n';
        else cout << cnt[c][r] << '\n';
    }
    return 0;
}