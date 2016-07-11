#include <iostream>
#include <string>
using namespace std;
bool positive = true;
int main() {
	string big, small;
	cin >> big >> small;
	if (big == small) {
		cout << 0;
		return 0;
	}
	if (small.size() > big.size() || (small.size() == big.size() && small > big)) {
		positive = false;
		swap(big, small);
	}
	int size = big.size();
	if (small.size() < size)
		small.insert(0, size - small.size(), 48);
	int flag = 0;
	for (int i = size - 1; i >= 0; i--) {
		big[i] = big[i] - small[i] - flag;
		if (big[i] < 0) {
			big[i] += 10;
			flag = 1;
		} else
			flag = 0;
		big[i] += 48;
	}
	if (!positive)
		cout << "-";
	cout << big;
	return 0;
}