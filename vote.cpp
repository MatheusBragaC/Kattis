#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> votos(n);
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> votos[i];
            total += votos[i];
        }

        int maior = -1;
        int indice_vencedor = -1;
        bool empate = false;

        for (int i = 0; i < n; i++)
        {
            if (votos[i] > maior)
            {
                maior = votos[i];
                indice_vencedor = i;
                empate = false;
            }
            else if (votos[i] == maior)
            {
                empate = true;
            }
        }

        if (empate)
        {
            cout << "no winner" << endl;
        }
        else if (maior > total / 2)
        {
            cout << "majority winner " << (indice_vencedor + 1) << endl;
        }
        else
        {
            cout << "minority winner " << (indice_vencedor + 1) << endl;
        }
    }

    return 0;
}
