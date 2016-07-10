#include <iostream>
using namespace std;
struct Node
{
	int l, r;
}node[17];

void preOrderTraverse(int node_number) {
	if (!node_number) return;
	cout << node_number << " ";
	preOrderTraverse(node[node_number].l);
	preOrderTraverse(node[node_number].r);
}

void inOrderTraverse(int node_number) {
	if (!node_number) return;
	inOrderTraverse(node[node_number].l);
	cout << node_number << " ";
	inOrderTraverse(node[node_number].r);
}

void lastOrderTraverse(int node_number) {
	if (!node_number) return;
	lastOrderTraverse(node[node_number].l);
	lastOrderTraverse(node[node_number].r);
	cout << node_number << " ";
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> node[i].l >> node[i].r;
	preOrderTraverse(1);
	cout << endl;
	inOrderTraverse(1);
	cout << endl;
	lastOrderTraverse(1);
	return 0;
}