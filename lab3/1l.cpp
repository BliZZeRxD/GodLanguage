#include <iostream>
 
using namespace std;
 
int main() {
   
    int n,m,k;
    cin >> n >> m >> k;
    if (k < (m*n) && k < 30000 && (k % n == 0 || k % m == 0))
        cout << "YES";
    else
        cout << "NO";

return 0;
 
}
