#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int arr[1000];
    int N, k; cin >> N >> k;
    for (int i = 0;i < N;++i)
        cin >> arr[i];
    sort(arr, arr + N, [](int a, int b) -> bool { return a > b; });
    cout << arr[k - 1];
    return 0;
}