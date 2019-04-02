#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int P,x,y,z;
    cin >> P >> x >> y;
    z = ((x*100+y)*(P+100))/100;
    cout << z / 100 << " " << z % 100 << endl;
 
    return 0;
}