#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(a > b && a > c)
		cout << a;
	else if(b > a && b > c)
		cout << b;
	else if(c > a && c > b)
		cout << c;
	else if(a == b || b == a)
		cout << a;
	else if(b == c || c == b)
		cout << b;






	return 0;
}