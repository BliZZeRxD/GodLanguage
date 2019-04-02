#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n,sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    if (a[i] == 0)
        sum += 1;
}
        cout << sum;
    return 0;
   
}