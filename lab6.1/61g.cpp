#include <iostream>
#include <cmath>
using namespace std;


int main(){
int n;
int a[n];
	cin >> n;
for(int i = 0; i < n; ++i){
	cin >> a[i];
}
for(int i = 0; i < n; i++){
	swap(a[i],a[n-(1+i)]);
	 
}
for(int i = n-1; i >= 0; i--){
	cout << a[i] << " ";}
	return 0;
}