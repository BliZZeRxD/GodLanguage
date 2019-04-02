#include <iostream>
using namespace std;

int main(){
	int n;

	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++)
	{

		cin >> a[i];
	
	}
	int max_number = a[0] ;
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max_number)
		{
			max_number = a[i];
		}
	}			

cout << max_number;
return 0;
} 
