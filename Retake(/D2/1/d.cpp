#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{	
	int deg,h,m;
	cin >> deg;
	h = deg / 30;
	m = deg % 30;
	cout << "It is " << h << " hours " << m <<" minutes."<< endl;






	return 0;
}