#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
   
    int a,b,c;
        cin >> a >> b >> c;
 
    if (a > b) swap(a , b);
    if (a > c) swap(a , c);
    if (b > c) swap(b , c);
    if (a + b > c && a + c > b && c + b > a ){
 
    if (pow(a,2)+pow(b,2)>pow(c,2))
        cout << "acute";
    else if (pow(a,2)+pow(b,2)<pow(c,2))
        cout << "obtuse";
    else if (pow(a,2)+pow(b,2)==pow(c,2))
        cout << "right";
}
    else
        cout << "impossible";
return 0;
 
}