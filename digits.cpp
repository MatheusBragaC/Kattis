#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;

    while (cin >> x && x != "END")
    {
        int i = 1;
        string anterior = x;
        string atual = to_string(x.length());

        while (atual != anterior)
        {
            anterior = atual;
            atual = to_string(atual.length());
            i++;
        }

        cout << i << endl;
    }

    return 0;
}
