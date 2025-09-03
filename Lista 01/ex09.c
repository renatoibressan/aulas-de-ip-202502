#include <stdio.h>

int main() {
    float n;
    int m;
    double a1, a2, a3;

    // printf("Entre com o valor de n: ");
    scanf("%f", &n);

    // calcula o primeiro arredondamento;
    m = n * 10 + 0.5;
    a1 = m / 10.0;
    printf("%lf\n", a1);
    // calcula o segundo arredondamento;
    m = n * 100 + 0.5;
    a2 = m / 100.0;
    printf("%lf\n", a2);
    // calcula o terceiro arredondamento;
    m = n * 1000 + 0.5;
    a3 = m / 1000.0;
    printf("%lf\n", a3);

    return 0;

}

