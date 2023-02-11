#include<vector>

using namespace std;

long long sum(vector<int >& a) {
	int sum = 0;
	for (auto i : a)
		sum += i;
	return sum;
}