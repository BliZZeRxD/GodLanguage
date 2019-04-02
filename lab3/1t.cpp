#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
   
    int a,b,c;
    cin >> a >> b >> c;
         if ((sqrt(pow(a,2)+pow(b,2))) == c)
        cout << "YES";
    else if ((sqrt(pow(c,2)+pow(b,2))) == a)
        cout << "YES";
    else if ((sqrt(pow(a,2)+pow(c,2))) == b)
        cout << "YES";
    else if (a == b && b==c)
        cout << "YES";
    else
        cout << "NO";
   
return 0;
 
}
