#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int king, queen, rook, knight, bishop, phone;
    cin >> king >> queen >> rook >> knight >> bishop >> phone;

    cout << 1 - king << " " << 1 - queen << " " << 2 - rook << " " << 2 - knight << " " << 2 - bishop << " " << 8 - phone;

    return 0;
}