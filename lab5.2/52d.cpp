#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    bool ok = true;
    int n;
        cin >> n;
    for (int i = 0; i <= n; i++){
    if (n == pow(2,i)){
        cout << "YES";
    ok = false;
}
}
    if (ok){
    cout << "NO";
}
  return 0;
 
}