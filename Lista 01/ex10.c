#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, l3;
    float T;
    float A;

    // printf("Entre com o valor de l1: ");
    scanf("%f", &l1);

    // printf("Entre com o valor de l2: ");
    scanf("%f", &l2);

    // printf("Entre com o valor de l3: ");
    scanf("%f", &l3);

    // calcula o valor de T;
    T = (l1 + l2 + l3)/2;
    // calcula o valor da área;
    A = sqrt(T * (T - l1) * (T - l2) * (T - l3));
    printf("A AREA DO TRIANGULO E = %.2f\n", A);

    return 0;

}
