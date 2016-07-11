#include <iostream>
#include <algorithm>
using namespace std;

struct Line
{
	int l, r;
}L[100];

bool cmp(Line l1, Line l2) {
	return l1.r < l2.r;
}
bool overlap(Line l1, Line l2) {;
	return l1.r > l2.l;
}

int main() {
	int N, count = 1;
	cin >> N;
	for (int i = 0, l, r; i < N; i++) {
		cin >> l >> r;
		if (l > r)
			swap(l, r);
		L[i].l = l;
		L[i].r = r;
	}
	sort(L, L+N, cmp);
	for (int i = 1, current = 0; i < N; i++) {
		if (!overlap(L[current], L[i])) {
			count++;
			current = i;
		}
	}
	cout << count;
	return 0;
}