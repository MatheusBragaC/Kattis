#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    if (y == 1)
    {
        if (x == 0)
        {
            cout << "ALL GOOD" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    else
    {
        double result = x / (1 - y);
        cout << fixed << setprecision(9) << result << endl;
    }

    return 0;
}