#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
	string n;
	int m, temp, sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n.size(); i++) {
		if (n[i] == '0')
			temp = 0;
		else if (n[i] >= '1' && n[i] <= '9')
			temp = n[i] - '0';
		else if (n[i] >= 'A' && n[i] <= 'F')
			temp = n[i] - '7';
		if (temp)
			sum += temp * pow(m, n.size() - i - 1);
	}
	cout << sum;
	return 0;
}