#include <iostream>
 
using namespace std;
int main(){
    int A,i;
    cin >> A >> i;
    A = A >> i;
    A = A << i;
    cout << A;
 
    return 0;
}