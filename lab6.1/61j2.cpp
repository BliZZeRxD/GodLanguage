#include <iostream>
#include <cmath>
using namespace std;


int main(){
int n,maxi;
	cin >> n;
int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[n];
}
maxi = a[0];

for(int i = 1; i < n; i++){
	if(maxi < a[i])
	maxi = a[i];
}
cout << maxi;




return 0;
}