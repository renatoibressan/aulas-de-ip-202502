#include <stdio.h>
// Grãos de milho no tabuleiro de xadrez
int main() {
    int n, b, p, graos;
    scanf("%d", &n);
    b = (n * 32) - n;
    p = n * 64;
    graos = b + p;
    printf("%d\n", graos);
    return 0;
}
