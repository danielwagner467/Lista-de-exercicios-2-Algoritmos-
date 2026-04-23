#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int numero, tentativa, cont = 0;

    srand(time(0));
    numero = rand() % 101;

    do {
        cout << "Digite um numero: ";
        cin >> tentativa;
        cont++;

        if(tentativa > numero)
            cout << "Menor\n";
        else if(tentativa < numero)
            cout << "Maior\n";

    } while(tentativa != numero);

    cout << "Acertou em " << cont << " tentativas!" << endl;

    system("pause");
    return 0;
}
