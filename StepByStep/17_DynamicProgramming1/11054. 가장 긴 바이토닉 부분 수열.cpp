#include<bits/stdc++.h>

using namespace std;

int A[1001];
int in[1001];
int de[1001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    for (int i = 1;i <= n;++i) {
        cin >> A[i];
    }
    for (int i = 1;i <= n;++i) {
        int length = 0;
        for (int j = 1;j < i;++j) {
            if (A[j]<A[i] && in[j]>length) length = in[j];
        }
        in[i] = length + 1;
    }
    for (int i = n;i >= 1;--i) {
        int length = 0;
        for (int j = n;j > i;--j) {
            if (A[j]<A[i] && de[j]>length) length = de[j];
        }
        de[i] = length + 1;
    }
    for (int i = 1;i <= n;++i) {
        ans = max(ans, in[i] + de[i] - 1);
    }
    cout << ans;
    return 0;
}