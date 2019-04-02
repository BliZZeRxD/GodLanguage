#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
   
    double k,i;
    cin >> k >> i;
    double page = ceil(i / k);
    int line = k-int(page * k - i);
    cout << page << " " << line << endl;
 
return 0;
 
}
