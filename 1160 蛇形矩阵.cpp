#include <iostream>
using namespace std;
int Pos;
int current_n;
int n;
int number = 1;
int main() {
	int arr[10000] = { 0 };
	int sum = 1;
	cin >> n;
	Pos = n*n / 2 - 1;
	for (current_n = 1; current_n <= n; current_n += 2) {
		Pos++;
		arr[Pos] = number++;
		for (int u = 0; u < current_n - 2; u++) {
			Pos -= n;
			arr[Pos] = number++;
			if (u == current_n - 3)
				sum += number - 1;
		}
		for (int l = 0; l < current_n - 1; l++) {
			Pos--;
			arr[Pos] = number++;
			if(l == current_n - 2)
				sum += number - 1;
		}
		for (int d = 0; d < current_n - 1; d++) {
			Pos += n;
			arr[Pos] = number++;
			if (d == current_n - 2)
				sum += number - 1;
		}
		for (int r = 0; r < current_n - 1; r++) {
			Pos++;
			arr[Pos] = number++;
			if (r == current_n - 2)
				sum += number - 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i*n + j];
			if (j != n - 1)
				cout << " ";
		}
		cout << endl;
	}
	cout << sum;
	return 0;
}


