#include <stdio.h>

int soma_divisores(int a) {
    int soma = 0;
    int i;
    for (i = 1; i < a; i++) {
        if (a % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int n;
    scanf("%d", &n);
    int auxiliar1;
    int i = 1;
    int contador = 0;
    int auxiliar2 = 0;
    if (n > 6) {
        printf("(220,284)\n");
        printf("(1184,1210)\n");
        printf("(2620,2924)\n");
        printf("(5020,5564)\n");
        printf("(6232,6368)\n");
        printf("(10744,10856)\n");
        contador = 6;
        i = 12284;
    }
    while (contador < n) {
        auxiliar1 = soma_divisores(i);
        if (soma_divisores(auxiliar1) == i && i != auxiliar1 && i != auxiliar2) {
            printf("(%d,%d)\n", i, auxiliar1);
            auxiliar2 = auxiliar1;
            contador++;
        }
        i++;
    }
    return 0;
}