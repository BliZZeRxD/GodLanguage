#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= sqrt(a); i++)
		for (int j = 1; j <= sqrt(a); j++)
		{
			if (i * i + j * j == a)
			{
				cout << "YES" << endl;
				cout << i << " " << j;
				return 0;
			}
		}
		cout << "NO";
		return 0;
}