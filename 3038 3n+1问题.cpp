#include <iostream>
using namespace std;
int f(int n){
	if (n == 1)
		return 0;
	if (n % 2)
		return 1 + f(3 * n + 1);
	else
		return 1 + f(n / 2);
}

int main() {
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << f(n) << endl;
	}
	return 0;
}