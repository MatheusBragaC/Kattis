#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int menor = INT_MAX;
    int indiceDoMenor = 0;

    for (int k = 0; k < n; k++)
    {
        int value;
        cin >> value;

        if (value < menor)
        {
            menor = value;
            indiceDoMenor = k;
        }
    }

    cout << indiceDoMenor << endl;

    return 0;
}