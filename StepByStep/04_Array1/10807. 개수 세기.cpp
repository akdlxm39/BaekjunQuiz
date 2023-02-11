#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N; cin >> N;
    int arr[100];
    memset(arr, 0, 100);
    for (int i = 0;i < N;++i) cin >> arr[i];
    int v; cin >> v;
    int cnt = 0;
    for (int i = 0;i < N;++i)
        if (arr[i] == v) cnt++;
    cout << cnt;
    return 0;
}