#include <iostream>
#include <algorithm>
using namespace std;
int f[20001] = { 0 }, w[31] = {0};
int main() {
	int v, n;
	cin >> v >> n;
	for (int i = 1; i <= n; i++)
		cin >> w[i];
	for (int i = 1; i <= n; i++)
		for (int j = v; j >= w[i]; j--)
			f[j] = max(f[j], f[j - w[i]] + w[i]);
	cout << v - f[v];
	return 0;
}