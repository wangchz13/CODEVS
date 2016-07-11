#include <iostream>
#include <vector>
using namespace std;
int N, sum, average;
vector<int> vec;
int count(int begin, int end) {
	if (begin >= end)
		return 0;
	int c = 0;
	if (vec[begin] != average) {
		vec[begin + 1] += vec[begin] - average;
		c++;
	}
	if (vec[end] != average) {
		vec[end - 1] += vec[end] - average;
		c++;
	}
	return c + count(++begin, --end);
}

int main() {
	cin >> N;
	for (int i = 0, t; i < N; i++) {
		cin >> t;
		vec.push_back(t);
		sum += t;
	}
	average = sum / N;
	cout << count(0, N - 1);
	return 0;
}