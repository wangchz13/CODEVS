#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string ans = "";
	while(n) {
		int s = n % m;
		n /= m;
		switch (s) {
		case 10:
			ans.append("A"); break;
		case 11:
			ans.append("B"); break;
		case 12:
			ans.append("C"); break;
		case 13:
			ans.append("D"); break;
		case 14:
			ans.append("E"); break;
		case 15:
			ans.append("F"); break;
		default:
			ans += s + '0';
			break;
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}