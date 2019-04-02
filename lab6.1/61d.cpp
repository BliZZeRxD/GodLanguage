#include <iostream>
#include <cmath> 
using namespace std;
 
	int main(){
    int n, k = 0;
    	cin>>n;
 	int arr[n];
     for(int i = 0; i < n; i++)
        cin >> arr[i];
     for (int i = 1; i < n; i++)
        k = k + (arr[i-1] < arr[i]);
    	cout << k;
   
 return 0;
}
 