#include <iostream>
using namespace std;
 
int main() {
int a,b,c,d,z;
   
    cin >> a >> b >> c >> d;
   
    a = a * 100 + b;
    c = c * 100 + d;
    a = c - a;
    z = a / 100;
    a = a % 100;
 
 
    cout << z << " " << a;
 
   
 
return 0;
 
}