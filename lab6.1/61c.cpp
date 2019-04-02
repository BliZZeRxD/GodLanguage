#include <iostream>
#include <cmath>
using namespace std;
    int main(){
    int n,cnt = 0;
        cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
      if (a[i] > 0)
            cnt += 1;
           
    }
        cout << cnt;
   
return 0;
   
}