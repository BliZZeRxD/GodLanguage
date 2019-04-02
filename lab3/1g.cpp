#include <iostream>
 
using namespace std;
 
int main() {
   
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (0<a && a<9 && 0<b && b<9 && 0<c && c<9 && 0<d && d<9){
 
    if (a==c || b==d)
        cout << "YES";
    else if (a!=c && b!=d)
        cout << "NO";
}  
 
return 0;
 
}
