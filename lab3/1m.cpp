#include <iostream>
using namespace std;
 
int main() {
   
    int k;
    cin >> k;
    if (k % 4 == 0 && k <= 30000)
        cout << "YES";
    else if (k == 1)
        cout << "YES";
    else
    cout << "NO";
 
 
 
return 0;
 
}