#include <iostream>
#include <cmath>
using namespace std;
int main(){

int n,i,Max;
		cin >> n;
	int a[n];
	for(i = 0 ;i < n ; i++){
		cin >> a[i];
	}
	Max = a[0];
	for(i = 1;i < n; i++){
	  if(Max < a[i]) Max = a[i];
	}
	cout << Max;

return 0;
}
