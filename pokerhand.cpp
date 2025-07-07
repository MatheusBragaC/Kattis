#include <iostream>     
#include <string>       
#include <sstream>      
#include <map>          

using namespace std;

int main()
{
    string linha_de_cartas;
    getline(cin, linha_de_cartas);

    map<char, int> contagem_por_rank;

    istringstream stream(linha_de_cartas);
    string carta;

    while (stream >> carta)
    {
        char rank = carta[0];
        contagem_por_rank[rank]++;
    }

    int forca_maxima = 0;

    for (const auto& par : contagem_por_rank)
    {
        forca_maxima = max(forca_maxima, par.second);
    }

    cout << forca_maxima << endl;

    return 0;
}
