#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int soma = 0;

    for(int i = 0; i <= 6; i++) {
        for(int j = i; j <= 6; j++) {
            soma += i + j;
        }
    }

    cout << "Soma total: " << soma << endl;

    system("pause");
    return 0;
}
