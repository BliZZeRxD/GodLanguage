#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int n,sum0 = 0,pos = 0,neg = 0;
        cin >> n;
    int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        if (a[i] == 0)
            sum0 += 1;
        if (a[i] > 0)
            pos += 1;
        if (a[i] < 0)
            neg += 1;
        }
        cout << sum0 << " " << pos << " " << neg;
    return 0;
   
}