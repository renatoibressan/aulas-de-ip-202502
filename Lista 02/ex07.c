#include <stdio.h>

int main() {
    int n, m;
    int i;
    scanf("%d %d", &n, &m);
    if (n % 2 != 0) {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }
    for (i = 0; i <= m-1; i++) {
        printf("%d ", n);
        n += 2;
    }
    return 0;
}