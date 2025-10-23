#include <stdio.h>
#include <string.h>
// Avance as Letras
int diferenca(char * a, char * b) {
    if (strlen(a) != strlen(b)) return -1;
    int i, soma = 0;
    for (i = 0; i < strlen(a); i++) {
        if (b[i] > a[i]) soma += b[i] - a[i];
        else if (a[i] > b[i]) soma += b[i] - a[i] + 26;
    }
    return soma;
}

int main() {
    int t;
    scanf("%d", &t);
    char va[10001], vb[10001];
    int i, distancia = 0;
    for (i = 0; i < t; i++) {
        scanf("%s%*c %s%*c", va, vb);
        distancia = diferenca(va, vb);
        if (distancia == -1) break;
        printf("%d\n", distancia);
    }
    return 0;
}
