#include <iostream>
 
using namespace std;
 
int main() {
   
    int a,b,c;
    cin >> a >> b >> c;
    if (a>c && a>b)
        cout << a;
    else if (b>a && b>c)
        cout << b;
    else if (a<c && b<c)
        cout << c;
    else if (a==b && a>c)
        cout << a;
    else if (a==c && a>b)
        cout << a;
    else if (b==c && a<b)
        cout << b;
    else if (a==b && a==c)
        cout << a;
 
return 0;
 
}


