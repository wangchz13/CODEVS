#include <iostream>
using namespace std;
int f(int n) {
	int ans = 1;
	for (int i = 1; i <= n / 2; i++)
		ans += f(i);
	return ans;
}
int main() {
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}