#include <stdio.h>

int converteEmNotasMoedas(int valor, int n100, int n50, int n10, int m1) {
    n100 = valor / 100;
    int i = valor % 100;
    n50 = i / 50;
    int j = i % 50;
    n10 = j / 10;
    int k = i % 10;
    m1 = k;
    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", m1);
}

int main() {
    int valor, x = 0, y = 0, z = 0, w = 0;
    scanf("%d", &valor);
    converteEmNotasMoedas(valor, x, y, z, w);
    return 0;
}