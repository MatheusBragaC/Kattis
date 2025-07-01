#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int soma = 0;
    
    for (int k = 0; k < n; k++)
    {
        int j;
        cin >> j;
        soma += (x - j);
    }
    
    int soma2 = soma + x;
    
    cout << soma2 << endl;
    
    return 0;
}