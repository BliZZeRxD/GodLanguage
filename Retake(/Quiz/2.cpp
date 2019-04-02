#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    

    
    for (int i = 0; i<a.size(); i++)
    {
        if (a[0] == ' ')
    {
        a.erase(0,1);
        i = 0;
    }

    if (a[a.size() - 1] == ' ')
    {
        a.erase(a.size() - 1,1);
        i=0;
    }

        if (a[i]  == ' ')
        a.erase(i, 1);
    }
    cout << a << "\n";
    return 0;
}