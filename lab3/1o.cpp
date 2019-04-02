#include <iostream>
 
using namespace std;
 
int main() {
   
    int a,b,c,d,x;
    cin >> a >> b >> c >> d;
    x = -b/a;
    if ( (a == 0 && b == 0)|| ( c == 0 && d == 0) )
        cout << "INF";
    else if (a != 0 && b % a == 0){
    if (a * x + b == c * x + d)
        cout << "NO";
    else
        cout << x;
    }
    else
        cout << "NO";
    return 0;
}
