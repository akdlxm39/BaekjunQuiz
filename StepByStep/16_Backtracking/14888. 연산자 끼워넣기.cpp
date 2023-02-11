#include<bits/stdc++.h>

using namespace std;

int nums[12];
int op[5];
int minX = INT_MAX, maxX = INT_MIN;

void exp(int n, int x, int i, int add, int sub, int mul, int div);

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0;i < n;++i)
        cin >> nums[i];
    for (int i = 0;i < 4;++i)
        cin >> op[i];
    exp(n, nums[0], 1, op[0], op[1], op[2], op[3]);

    cout << maxX << '\n' << minX;
    return 0;
}

void exp(int n, int x, int i, int add, int sub, int mul, int div) {
    if (i == n) {
        minX = min(minX, x);
        maxX = max(maxX, x);
        return;
    }
    if (add) exp(n, x + nums[i], i + 1, add - 1, sub, mul, div);
    if (sub) exp(n, x - nums[i], i + 1, add, sub - 1, mul, div);
    if (mul) exp(n, x * nums[i], i + 1, add, sub, mul - 1, div);
    if (div) exp(n, x / nums[i], i + 1, add, sub, mul, div - 1);
}