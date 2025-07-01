#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string n;
    getline(cin, n);
    int j = 0;
    
    for(int k = 0; k < n.length() - 1; k++)
    {
        if (n[k] == 's' && n[k + 1] == 's')
        {
            j = j + 1;
        }
    }
    
    if (j >= 1)
    {
        cout << "hiss" << endl;
    }
    else
    {
        cout << "no hiss" << endl;
    }
    
    return 0;
}