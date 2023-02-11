/*
#include<iostream>

using namespace std;

short arr[10000001];
short temp[10000001];

void mergeSort(int start, int end);
void merge(int start, int mid, int end);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	mergeSort(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";
}

void mergeSort(int start, int end) {
	if (start >= end) return;
	int mid = (start + end) / 2;
	mergeSort(start, mid);
	mergeSort(mid + 1, end);
	merge(start, mid, end);
}

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
*/