#include<bits/stdc++.h>

using namespace std;

int main() {
   	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int a, b, c, temp;
    cin >> a >> b >> c;
    b += c;
    a += b / 60;
    b %= 60;
    a %= 24;
    cout << a << " " << b;
    return 0;
}