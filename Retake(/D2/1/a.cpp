#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int n,m,ans;// n - kletok m - zaicev
	cin >> n >> m;
	if(m % n == 0)
	{
	 	ans = m / n;
	}
	else
		ans = (m / n) + 1 ;

	return 0;
}