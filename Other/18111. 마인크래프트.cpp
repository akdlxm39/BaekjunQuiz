#include <bits/stdc++.h>

using namespace std;

int G[501][501];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int N, M, B;
    cin >> N >> M >> B;
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j){
            cin >> G[i][j];
        }
    
    int time = INT_MAX, height = 0;

    for(int H = 256; H >= 0; --H){
        int t = 0, b = B;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(G[i][j] > H){
                    t += 2 * (G[i][j] - H);
                    b += G[i][j] - H;
                }
                else if(G[i][j] < H){
                    t += H - G[i][j];
                    b -= H - G[i][j];
                }
            }
        }
        if(b >= 0 && t < time){
            time = t;
            height = H;
        }
    }

    cout << time << ' ' << height;

	return 0;
}