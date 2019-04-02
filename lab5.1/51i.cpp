#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   
    int x,cnt = 0;
    cin >> x;
    if (x <= 30000)
    for (int i = 1; i<=x; i++){
    if (x % i == 0)
        cnt ++;
   
           
}
    cout << cnt;
   
    return 0;
   
}
