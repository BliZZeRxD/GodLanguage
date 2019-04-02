#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int mini;
	int n;
	cin>>n;

	int a[n];

	for(int i = 0; i < n; i++){

		cin>>a[i];
	
	}

	int x;
	cin >> x;
    



    mini = abs(x - a[0]);
    int mini_index = 0;



    for(int i = 1; i < n; ++i){
    	if (abs(x - a[i])< mini){


    		mini = abs(x - a[i]);

    	}
		

	}
	cout << mini;
	return 0;

    }

