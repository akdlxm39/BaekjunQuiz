#include<bits/stdc++.h>

using namespace std;

int arr[500001];
int temp[500001];
int save[500001];
int iter = 0;

void merge(int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;
	while (i <= mid && j <= end) {
		if (arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while (i <= mid)
		temp[k++] = arr[i++];
	while (j <= end)
		temp[k++] = arr[j++];
	for (int n = start; n <= end; n++)
		arr[n] = temp[n];
}

void mergeSort(int start, int end) {
	if (start >= end) return;
	int mid = (start + end) / 2;
	mergeSort(start, mid);
	mergeSort(mid + 1, end);
	merge(start, mid, end);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
	int N, K; cin >> N >> K;
	for(int i = 0; i < N; ++i)
		cin >> arr[i];
    

    return 0;
}