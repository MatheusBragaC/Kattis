#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    
    if (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "NO" << endl;
    }
    else if (a + b + c < n || n < 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}