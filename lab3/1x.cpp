#include <iostream>
using namespace std;
	int main(){
 	int  n;
		cin >>n ;
 
	if ( n % 10 == 1 && n < 100 && n != 11)
		cout << n << " " << "korova";
	else if ( (n % 10 == 2 || n % 10 == 3 || n % 10 == 4) && n < 100 && n != 12 && n != 13 && n != 14)
		cout << n << " " << "korovy";
	else if ( n < 100 && n > 4 )
		cout << n << " " << "korov";
 
 
 
 
    return 0;
}
