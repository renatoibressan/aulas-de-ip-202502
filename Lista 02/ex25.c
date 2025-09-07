#include <stdio.h>

int main() {
    int n, i, j;
    int impar = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d*%d*%d = ", i, i, i);
        for (j = 0; j < i; j++) {
            printf("%d", impar);
            impar += 2;
            if (j < i - 1) {
                printf("+");
            }
        }
        printf("\n");
    }
    return 0;
}