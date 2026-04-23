#include <iostream>
#include <stdio.h>

int main() {
    int n1, n2, n3;
    float media;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Calculamos a soma e dividimos por 3.0 para forçar o resultado decimal
    media = (n1 + n2 + n3) / 3.0;

    printf("A média dos valores: %.2f\n", media);

    return 0;
}