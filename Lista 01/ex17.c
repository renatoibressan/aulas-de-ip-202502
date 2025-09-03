#include <stdio.h>

int main() {
    int v;
    int n100, n50, n10;
    int x, y, z, w;

    // printf("Entre com o valor total: ");
    scanf("%d", &v);

    // calcula a quantidade de notas de 100;
    x = v / 100;
    // calcula a quantidade de notas de 50;
    n100 = v % 100;
    y = n100 / 50;
    // calcula a quantidade de notas de 10;
    n50 = n100 % 50;
    z = n50 / 10;
    // calcula a quantidade de moedas de 1;
    n10 = n50 % 10;
    w = n10 / 1;
    printf("NOTAS DE 100 = %d\n", x);
    printf("NOTAS DE 50 = %d\n", y);
    printf("NOTAS DE 10 = %d\n", z);
    printf("MOEDAS DE 1 = %d\n", w);

    return 0;
}