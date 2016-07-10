#include<iostream>
using namespace std;
int f(int x){
	if(x >= 0)
		return 5;
	else
		return f(x+1) + f(x+2) + 1;
}

int main()
{
	int x;
	cin >> x;
	cout << f(x);
	return 0;
 }