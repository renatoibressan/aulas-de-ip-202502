#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y;

    // printf("Entre com o valor de a: ");
    scanf("%f", &a);

    // printf("Entre com o valor de b: ");
    scanf("%f", &b);
    
    // printf("Entre com o valor de c: ");
    scanf("%f", &c);

    // printf("Entre com o valor de d: ");
    scanf("%f", &d);

    // printf("Entre com o valor de e: ");
    scanf("%f", &e);

    // printf("Entre com o valor de f: ");
    scanf("%f", &f);

    // calcula o valor de x;
    x = (c/b - f/e)/(a/b - d/e);
    // calcula o valor de y;
    y = (c - a * x)/b;
    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}