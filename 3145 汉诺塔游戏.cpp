#include <iostream>
#include <math.h>
using namespace std;
void hanoi(int n, char a, char b, char c) {
	if (n == 1)
		cout << n << " from " << a << " to " << c << endl;
	else {
		hanoi(n - 1, a, c, b);
		cout << n << " from " << a << " to " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}
int main() {
	int n;
	cin >> n;
	cout << pow(2, n)-1 << endl;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}