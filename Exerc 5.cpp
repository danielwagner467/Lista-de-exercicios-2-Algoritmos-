#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite 3 numeros: ";
    cin >> a >> b >> c;

    if(a < b) swap(a, b);
    if(a < c) swap(a, c);
    if(b < c) swap(b, c);

    cout << "Ordem: " << a << " " << b << " " << c << endl;

    system("pause");
    return 0;
}