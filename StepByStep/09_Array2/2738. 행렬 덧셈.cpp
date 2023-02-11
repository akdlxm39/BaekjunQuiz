#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, M; cin >> N >> M;
    int arr[100][100];
    memset(arr, 0, 10000);

    for (int i = 0;i < N;++i) {
        for (int j = 0;j < M;++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0;i < N;++i) {
        for (int j = 0;j < M;++j) {
            int x; cin >> x;
            arr[i][j] += x;
        }
    }
    for (int i = 0;i < N;++i) {
        for (int j = 0;j < M;++j) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}