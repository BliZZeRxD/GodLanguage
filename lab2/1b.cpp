#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    float num,i,x;
    cin >> num;
    x = modf (num, &i);
    cout << x;
 
    return 0;
}