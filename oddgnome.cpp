#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int grupo = 0; grupo < n; grupo++)
    {
        int g;
        cin >> g;

        int anterior, atual;
        cin >> anterior; 
        int posicao_do_rei = -1;

        for (int i = 2; i <= g; i++) 
        {
            cin >> atual;

            if (posicao_do_rei == -1 && atual != anterior + 1)
            {
                posicao_do_rei = i;
            }

            anterior = atual;
        }

        cout << posicao_do_rei << endl;
    }

    return 0;
}
