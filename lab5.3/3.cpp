#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	int length;
	int sum = 0;
	cin >> n;
while(n){
	sum += n;
	cin >> n;
	length++;
	}
double sr = (double)sum / length;


printf("%0.15f",sr);
return 0;

}