#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int temp;
	while (b) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main() {
	int A, B;
	cin >> A >> B;
	cout << gcd(A, B);
	return 0;
}

