#include <iostream>
#include <algorithm>
using namespace std;
int dp[41][41][41][41] = {0};
int  main() {
	int N, M, a[351] = {0}, b[5] = {0}, temp;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 1; i <= M; i++) {
		cin >> b[0];
		b[b[0]]++;
	}
	for(int i = 0; i <= b[1]; i++)
		for(int j = 0; j <= b[2]; j++)
			for(int k = 0; k <= b[3]; k++)
				for (int l = 0; l <= b[4]; l++) {
					temp = 0;
					if (i) temp = max(dp[i - 1][j][k][l], temp);
					if (j) temp = max(dp[i][j - 1][k][l], temp);
					if (k) temp = max(dp[i][j][k - 1][l], temp);
					if (l) temp = max(dp[i][j][k][l - 1], temp);
					dp[i][j][k][l] = temp + a[i + 2 * j + 3 * k + 4 * l];
				}
	cout << dp[b[1]][b[2]][b[3]][b[4]];
	return 0;
}