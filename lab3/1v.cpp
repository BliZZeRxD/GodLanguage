#include <iostream>
#include <cmath>
using namespace std;
  int main () {
    double a,b,c;
    cin>>a>>b>>c;
    double d,x1,x2;
    d=b*b-4*a*c;
 
  if (d>0){

    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("%.5f\n %.5f",x1 ,x2);

}
  else if (d==0){

    x1=-b/(2*a);
    printf("%.5f",x1);

}
return 0;
}
 
