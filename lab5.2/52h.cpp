#include <iostream>
#include <cmath>
using namespace std;
  int main(){
  int n, i = 2, f1 = 0, f2 = 1, ans;
      cin >> n;
  while (i <= n){
      ans = f1 + f2;
      f1 = f2;
      f2 = ans;
      i++;
}
  if (n<=1)
      cout<<n;
  else
      cout << ans;


}