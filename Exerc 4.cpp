#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int a, b, maior;

    cout << "Digite dois numeros: ";
    cin >> a >> b;

    maior = (a > b) ? a : b;

    while(true) 
        if(maior % a == 0 && maior % b == 0)
            break;
        maior++;
    }