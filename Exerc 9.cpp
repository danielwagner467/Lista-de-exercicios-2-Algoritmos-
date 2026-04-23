#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    float tamanho, velocidade, tempo;

    cout << "Digite tamanho (MB) e velocidade (Mbps): ";
    cin >> tamanho >> velocidade;

    tempo = (tamanho * 8) / velocidade;
    tempo = tempo / 60;

    cout << "Tempo aproximado: " << tempo << " minutos" << endl;

    system("pause");
    return 0;
}
