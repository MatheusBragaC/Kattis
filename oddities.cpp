#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int k = 0; k < n; k++)
    {
        int a;
        cin >> a;
        
        if (a % 2 == 0)
        {
            cout << a << " is even" << endl;
        }
        else
        {
             cout << a << " is odd" << endl;
        }
        
        
    }
    
    
    
    return 0;
}
