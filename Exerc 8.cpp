#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    float peso, altura, imc;

    cout << "Digite peso e altura: ";
    cin >> peso >> altura;

    imc = peso / (altura * altura);

    cout << "IMC: " << imc << endl;

    system("pause");
    return 0;
}
