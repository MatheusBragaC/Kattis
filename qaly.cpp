#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j;
    cin >> j;
    double quantidade2 = 0.0;
    
    for (int k = 0; k < j; k++)
    {
        double a, b;
        cin >> a >> b;
        double quantidade = a * b;
        quantidade2 = quantidade2 + quantidade;
    }
    
    cout << fixed << setprecision(3) << quantidade2 << endl;
    
    return 0;
}
