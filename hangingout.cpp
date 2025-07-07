#include <iostream>
#include <string>

using namespace std;

int main()
{
    int capacidade_maxima;
    int numero_de_eventos;
    cin >> capacidade_maxima >> numero_de_eventos;

    int pessoas_atuais = 0;
    int grupos_negados = 0;

    for (int i = 0; i < numero_de_eventos; i++)
    {
        string tipo_evento;
        int quantidade;

        cin >> tipo_evento >> quantidade;

        if (tipo_evento == "enter")
        {
            if (pessoas_atuais + quantidade > capacidade_maxima)
            {
                grupos_negados += 1;
            }
            else
            {
                pessoas_atuais += quantidade;
            }
        }
        else if (tipo_evento == "leave")
        {
            pessoas_atuais -= quantidade;
        }
    }

    cout << grupos_negados << endl;

    return 0;
}