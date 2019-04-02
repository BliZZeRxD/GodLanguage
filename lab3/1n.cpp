#include <iostream>
using namespace std;
 
int main() {
   
    int a,b,x;
    cin >> a >> b;
    x = -b/a;
    if (a == 0 && b == 0)
        cout << "INF";
    else if (a != 0 && b % a == 0)
        cout << x;
else    
    cout << "NO";
return 0;
 
}