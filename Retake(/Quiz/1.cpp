#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,d,c,b,a;
	cin >> x;
	a = x % 2;
	x/=2;
	b = a % 2;
	x/=2;
	c = b % 2;
	x/=2;
	d = x;
	cout << a*8 << b*4<< c*2  << d<<endl; 
}