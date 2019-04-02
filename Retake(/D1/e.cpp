#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int v,t,s;
	cin >> v >> t;
	if(v > 0)
			s = abs(v) * t;
		
	else if(v < 0)
		s = 109 - (abs(v) * t);
	
	

	cout << s % 109;

	
	return 0;
}
