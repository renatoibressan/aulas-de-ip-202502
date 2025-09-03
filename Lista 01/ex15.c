#include <stdio.h>

int main() {
    int n, b;
    int r1, r2, r3, r4, r5, r6, r7, r8;

    // printf("Entre com o valor de n: ");
    scanf("%d", &n);
    // verifica se n está no range [0, 255];
    if (n < 0 || n > 255) {
        printf("Numero invalido!\n");
        return 0;
    }

    r1 = (n / 1) % 2; // extrai o primeiro resto;
    r2 = (n / 2) % 2; // extrai o segundo resto;
    r3 = (n / 4) % 2; // extrai o terceiro resto;
    r4 = (n / 8) % 2; // extrai o quarto resto;
    r5 = (n / 16) % 2; // extrai o quinto resto;
    r6 = (n / 32) % 2; // extrai o sexto resto;
    r7 = (n / 64) % 2; // extrai o sétimo resto;
    r8 = (n / 128) % 2; // extrai o oitavo resto;
    // soma os restos em ordem para formar o número binário b;
    b = r1 + r2 * 10 + r3 * 100 + r4 * 1000 + r5 * 10000 + r6 * 100000 + r7 * 1000000 + r8 * 10000000;
    printf("%08d\n", b);

    return 0;
}