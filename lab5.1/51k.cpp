#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int n, x;
    long sum = 0;
  		cin >> n;
 
    for (int i = 1; i <= n; i++){
    	cin >> x;
    	sum += x;
}
  cout << sum ;  
}
