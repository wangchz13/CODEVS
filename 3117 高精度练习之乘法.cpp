#include <iostream>
#include <string>
using namespace std;

void bigplus(string &s1, string &s2) {
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
		if (!i&&flag)
			s2.insert(0, 1, '1');
	}
}

string smult(int s, string str) {
	string ans;
	int size = str.size();
	int flag = 0, temp;
	for (int i = size - 1; i >= 0; i--) {
		temp = s * (str[i] - 48) + flag;
		flag = temp / 10;
		ans.insert(0, 1, temp % 10 + 48);
		if (!i&&flag)
			ans.insert(0, 1, flag + 48);
	}
	return ans;
}

int main() {
	string sum = "0", s1, s2, temp;
	cin >> s1 >> s2;
	for (int i = s1.size() - 1; i >= 0; i--) {
		temp = smult(s1[i] - 48, s2);
		temp.append(s1.size() - 1 - i, '0');
		bigplus(temp, sum);
	}
	cout << sum;
	return 0;
}