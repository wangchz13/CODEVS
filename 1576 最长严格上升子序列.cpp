#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N, a[5001], dp[5001] = {0}, m=0;
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> a[i];
	for (int i = 1; i <= N; i++)
		for (int j = 1; j < i; j++)
			if (a[j] <= a[i])
				dp[i] = max(dp[i], dp[j] + 1), m = dp[i] > m ? dp[i] : m;
	cout << m + 1;
	return 0;
}