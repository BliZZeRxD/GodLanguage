#include <iostream>
using namespace std;
 
int main() {
    int a,b,c,d,e;
    cin >> a;
    b = a % 1440;
    c = b / 60;
    d = b % 1440;
    e = d-c * 60;
    cout << c << " " << e;
return 0;
}
