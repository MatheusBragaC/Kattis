#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    double f = 0;
    int validos = 0; 

    for (int k = 0; k < n; k++)
    {
        int a;
        cin >> a;

        if (a >= 0)
        {
            f = f + a;
            validos = validos + 1;
        }
    }

    double result = f / validos;

    cout << result << endl;

    return 0;
}