#include <bits/stdc++.h>

using namespace std;

int main()
{
    int g, s, c;
    cin >> g >> s >> c;

    int gold = g * 3;
    int silver = s * 2;
    int copper = c;
    int result = gold + silver + copper;

    if (result >= 8)
    {
        cout << "Province or Gold" << endl;
    }
    else if (result >= 6)
    {
        cout << "Duchy or Gold" << endl;
    }
    else if (result >= 5)
    {
        cout << "Duchy or Silver" << endl;
    }
    else if (result >= 3)
    {
        cout << "Estate or Silver" << endl;
    }
    else if (result >= 2)
    {
        cout << "Estate or Copper" << endl;
    }
    else
    {
        cout << "Copper" << endl;
    }

    return 0;
}