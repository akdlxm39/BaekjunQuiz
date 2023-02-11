#include<bits/stdc++.h>

using namespace std;

void reverse(char x[]) {
    char temp[10002];
    int len = strlen(x);
    for (int i = 0; i < len; i++) {
        temp[i] = x[len - i - 1];
    }
    for (int i = 0; i < len; i++) {
        x[i] = temp[i];
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    char a[10001] = { 0 }, b[10001] = { 0 };
    char c[10002] = { 0 };
    int len, alen, blen;
    int carry = 0;

    cin >> a >> b;

    alen = strlen(a);
    blen = strlen(b);
    len = max(alen, blen);

    reverse(a);
    reverse(b);

    for (int i = 0; i < len; i++) {
        int sum = a[i] - '0' + b[i] - '0' + carry;

        if (sum < 0)
            sum += '0';

        if (sum > 9) {
            carry = 1;
            sum %= 10;
        }
        else
            carry = 0;

        c[i] = char(sum) + '0';
    }
    if (carry) c[len] = '1';

    reverse(c);
    cout << c;
    return 0;
}