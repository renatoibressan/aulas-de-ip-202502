#include <stdio.h>

int main() {
    int A, B;
    double M;

    // printf("Entre com o valor de A: ");
    scanf("%d", &A);

    // printf("Entre com o valor de B: ");
    scanf("%d", &B);

    // calcula o valor da média entre dois números inteiros;
    M = (A+B)/2.0;
    printf("%.3lf\n", M);

    return 0;
}
