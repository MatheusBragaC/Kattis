#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    if(m < n)
    {
        int falta = n - m;
        if(falta == 1)
        {
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        }
        else
        {
            cout << "Dr. Chaz needs " << falta << " more pieces of chicken!" << endl;
        }
    }
    else
    {
        int sobra = m - n;
        if(sobra == 1)
        {
            cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        }
        else
        {
            cout << "Dr. Chaz will have " << sobra << " pieces of chicken left over!" << endl;
        }
    }

    return 0;
}