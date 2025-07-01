#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s0, s1, r0, r1;

    while (cin >> s0 >> s1 >> r0 >> r1)
    {
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0)
            break;

        int Smaior = max(s0, s1);
        int Smenor = min(s0, s1);
        int Rmaior = max(r0, r1);
        int Rmenor = min(r0, r1);

        int valorS = Smaior * 10 + Smenor;
        int valorR = Rmaior * 10 + Rmenor;

        if ((valorS == 12 || valorS == 21) && (valorR != 12 && valorR != 21))
        {
            cout << "Player 1 wins." << endl;
        }
        else if ((valorR == 12 || valorR == 21) && (valorS != 12 && valorS != 21))
        {
            cout << "Player 2 wins." << endl;
        }
        else if (Smaior == Smenor && Rmaior != Rmenor)
        {
            cout << "Player 1 wins." << endl;
        }
        else if (Rmaior == Rmenor && Smaior != Smenor)
        {
            cout << "Player 2 wins." << endl;
        }
        else if (valorS > valorR)
        {
            cout << "Player 1 wins." << endl;
        }
        else if (valorR > valorS)
        {
            cout << "Player 2 wins." << endl;
        }
        else
        {
            cout << "Tie." << endl;
        }
    }

    return 0;
}
