#include <stdio.h>
// Dados
int main() {
    int n, k = 0;
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6; j++) {
            if (i + j == n && i != j) {
                printf("D1: %d, D2: %d\n", i, j);
                k++;
            }
        }
    }
    if (k == 0) {
        printf("Combinacao impossivel\n");
    } else {
        printf("Ha %d possibilidades\n", k);
    }
    return 0;
}
