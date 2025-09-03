#include <stdio.h>

int main() {
    float nota;
    char conceito;
    scanf("%f", &nota);
    if (nota >= 9 && nota <= 10) {
        conceito = 'A';
        printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);
    } else if (nota >= 7.5 && nota < 9) {
        conceito = 'B';
        printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);
    } else if (nota >= 6 && nota < 7.5) {
        conceito = 'C';
        printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);
    } else if (nota >= 0 && nota < 6) {
        conceito = 'D';
        printf("NOTA = %.1f CONCEITO = %c\n", nota, conceito);
    } else {
        return 0;
    }
    return 0;
}