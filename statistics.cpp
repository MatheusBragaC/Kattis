#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numeroDoCaso = 1;
    int n;

    while (cin >> n)
    {
        int minimo, maximo;
        cin >> minimo;
        maximo = minimo;

        for (int k = 1; k < n; k++)
        {
            int valor;
            cin >> valor;

            minimo = min(minimo, valor);
            maximo = max(maximo, valor);
        }

        int intervalo = maximo - minimo;

        cout << "Case " << numeroDoCaso << ": " << minimo << " " << maximo << " " << intervalo << endl;
        numeroDoCaso++;
    }

    return 0;
}
