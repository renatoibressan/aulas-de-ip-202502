#include <stdio.h>

int main() {
    int n, f1, f2;
    int a1, a2;
    int i;
    scanf("%d %d %d", &n, &f1, &f2);
    scanf("%d %d ", &a1, &a2);
    if (f1 != a1) {
        printf("Nao e Fibonacci\n");
        return 0;
    } else {
        printf("OK\n");
    }
    if (f2 != a2) {
        printf("Nao e Fibonacci\n");
        return 0;
    } else {
        printf("OK\n");
    }
    for (i = 2; i < n; i++) {
        int f;
        scanf("%d", &f);
        if (f != a1 + a2) {
            printf("Nao e Fibonacci\n");
            return 0;
        } else {
            printf("OK\n");
        }
        a1 = a2;
        a2 = f;
    }
    printf("A serie informada e de Fibonacci\n");
    return 0;
}