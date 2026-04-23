#include <iostream>  

using namespace std;

int main() {
    int total, h, m, s;

    cout << "Digite o total de segundos: ";
    cin >> total;

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    cout << h << "h " << m << "m " << s << "s";
    
    system("pause");

    return 0;
}