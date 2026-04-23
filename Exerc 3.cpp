#include <iostream>

#include <stdlib.h>
using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||
       letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        cout << "Vogal" << endl;
    else
        cout << "Consoante" << endl;

    system("pause");
    return 0;
}