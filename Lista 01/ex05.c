#include <stdio.h>

int main() {
    float a, b, c, d;
    float X;

    // printf("Entre com o valor de a: ");
    scanf("%f", &a);

    // printf("Entre com o valor de b: ");
    scanf("%f", &b);

    // printf("Entre com o valor de c: ");
    scanf("%f", &c);

    // printf("Entre com o valor de d: ");
    scanf("%f", &d);

    // calcula o valor do determinante;
    X = (a * d) - (b * c);
    printf("O VALOR DO DETERMINANTE E = %.2f\n", X);

    return 0;
}
