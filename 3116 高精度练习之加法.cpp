#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int flag = 0;
	int size = s1.size() > s2.size() ? s1.size() : s2.size();
	if (s1.size() < size)
		s1.insert(0, size - s1.size(), 48);
	if (s2.size() < size)
		s2.insert(0, size - s2.size(), 48);
	for (int i = size - 1; i >= 0; i--) {
		s2[i] += s1[i] - 96 + flag;
		if (s2[i] >= 10) {
			s2[i] -= 10;
			flag = 1;
		} else
			flag = 0;
		s2[i] += 48;
	}
	cout << s2;
	return 0;
}