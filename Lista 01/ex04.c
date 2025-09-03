#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float delta;

    // printf("Entre com o valor de a: ");
    scanf("%f", &a);

    // printf("Entre com o valor de b: ");
    scanf("%f", &b);

    // printf("Entre com o valor de c: ");
    scanf("%f", &c);

    // calcula o valor de delta;
    delta = b * b - 4 * a * c;
    printf("O VALOR DE DELTA E = %.2f\n", delta);

    return 0;
}
