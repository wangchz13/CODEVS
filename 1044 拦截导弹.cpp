//int maxinter(int i, int high) {
//	if (i == N) {
//		if (high >= a[i])
//			return 1;
//		else
//			return 0;
//	}
//	if (high >= a[i])
//		return max(maxinter(i + 1, a[i]) + 1, maxinter(i + 1, high));
//	else
//		return maxinter(i + 1, high);
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N = 1, a[21] = {0}, dpi[21] = {0}, dpd[21] = {0}, max1=0,max2=0;
	while (cin >> a[N++]);
	N -= 2;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i - 1; j++) {
			if (a[i] < a[j])
				dpd[i] = max(dpd[i], dpd[j] + 1), max1 = dpd[i] > max1 ? dpd[i]:max1;
			else
				dpi[i] = max(dpi[i], dpi[j] + 1), max2 = dpi[i] > max2 ? dpi[i]:max2;
		}
	}
	cout << max1 + 1 <<endl << max2 + 1;
	return 0;
}