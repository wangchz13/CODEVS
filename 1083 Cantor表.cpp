#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int N, S, M;
	cin >> N;
	int n = sqrt(2 * N - 1.75) - 0.5;
	int delta = N - 2 * n - (n - 1)*(n - 2) / 2;
	S = 1 + delta;
	M = n + 1 - delta;
	if (n % 2)
		cout << S << "/" << M;
	else
		cout << M << "/" << S;
	return	0;
}