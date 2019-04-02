#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	cin >> x;
	int c =x * 100;
	int a = c / 100;
	int b = c % 100;
	cout << a << " " <<b;
}