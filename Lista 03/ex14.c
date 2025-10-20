#include <stdio.h>
// Procura Caractere
int find(char A, char const * B) {
    int i;
    for (i = 0; B[i] != '\0'; i++) {
        if (A == B[i]) return i;
    }
    if (A != B[i]) return -1;
}

int main() {
    int n;
    char a, b[505];
    scanf("%d%*c", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%c %[^\n]%*c", &a, b);
        int valor = find(a, b);
        if (valor == -1) printf("Caractere %c nao encontrado.\n", a);
        else printf("Caractere %c encontrado no indice %d da string.\n", a, valor);
    }
    return 0;
}
