#include <iostream>
using namespace std;
 
int main(){
    int x;
        cin >> x;
    if (x <= 30000 && x >= 2){
    if (x % 2 == 0)
        cout << 2;
    if (x % 2 != 0 && x % 3 == 0)
        cout << 3;
    else if (x % 10 == 5)
        cout << 5;
    else if (x % 2 != 0 && x % 3 != 0 && x % x == 0){
        cout << x;}
}
   
   
    return 0;
   
}
