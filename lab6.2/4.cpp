#include <iostream> // 55
#include <cmath>
using namespace std;
int main(){
int n,x,c,k,a;
cin >> n;
 x = n / 10;//2
 c = n % 10;//1 
 k = c * 10;//
 a = x + k;

for(int i = a;i > 0; i --)
{
	cout << i << " ";  
}
return 0;
}