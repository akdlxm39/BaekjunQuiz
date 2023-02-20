#include <bits/stdc++.h>

using namespace std;

char board[2001][2001] = {};
int sum[2001][2001];
int pre1[2001][2001];
int pre2[2001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

	int N, M, K; 
	cin >> N >> M >> K;
    for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> board[i][j];
		}
	}
	int maxAns = K * K;

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < K; ++j) {
			if ((i + j) % 2 == 0 && board[i][j] == 'B') {
				pre2[i]++;
			}
			else if ((i + j) % 2 == 1 && board[i][j] == 'W') {
				pre2[i]++;
			}
		}
	}

	for(int i = 0; i <= N - K; ++i) {
		for(int j = 0; j < M; ++j) {
			for(int k = 0; k < K; ++k){
				if ((i + k + j) % 2 == 0 && board[i + k][j] == 'B') {
					pre1[i][j]++;
				}
				else if ((i + k + j) % 2 == 1 && board[i + k][j] == 'W') {
					pre1[i][j]++;
				}
			}
		}
	}

	int ans = INT_MAX;
    
	for (int i = 0; i < K; ++i) {
		for (int j = 0; j < K; ++j) {
			if ((i + j) % 2 == 0 && board[i][j] == 'B') {
				sum[0][0]++;
			}
			else if ((i + j) % 2 == 1 && board[i][j] == 'W') {
				sum[0][0]++;
			}
			ans = min(sum[0][0], maxAns - sum[0][0]);
		}
	}

	for(int i = 1; i <= N - K; ++i) {
		sum[i][0] = sum[i - 1][0] - pre2[i - 1] + pre2[i + K - 1];
		ans = min(min(sum[i][0], maxAns - sum[i][0]), ans);
	}

	for (int i = 0; i <= N - K; ++i) {
		for (int j = 1; j <= M - K; ++j) {
			sum[i][j] = sum[i][j - 1] - pre1[i][j - 1] + pre1[i][j + K - 1];
			ans = min(min(sum[i][j], maxAns - sum[i][j]), ans);
		}
	}

	cout << ans;

	return 0;
}