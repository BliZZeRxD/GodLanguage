#include <iostream>
using namespace std;

int main(){

int x, del(0);

cin >> x;

for(int i(2); i <= x; i++)
if(x % i == 0) { del = i;}

cout << del << endl;
return 0;
}
