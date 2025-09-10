#include <stdio.h>

int main() {
    int tamanho;
    int n1, n2;
    int x = 0, intercalada = 0;
    int i;
    while (1) {
        x = 1;
        scanf("%d", &tamanho);
        if (tamanho == 0) {
            break;
        }
        scanf("%d%d", &n1, &n2);
        if (n1 > n2) {
            x = 0;
        } else {
            x = 1;
        }
        intercalada = 1;
        n1 = n2;
        for (i = 2; i < tamanho; i++) {
            scanf("%d", &n2);
            switch (x) {
                case 0:
                    if (n2 <= n1) {
                        intercalada = 0;
                    }
                    x = 1;
                    break;
                case 1:
                    if (n2 >= n1) {
                        intercalada = 0;
                    }
                    x = 0;
                    break;
            }
            n1 = n2; 
        }
        if (intercalada == 0) {
            printf("Nao intercalada\n");
        } else {
            printf("Intercalada\n");
        }
    }
    return 0;
}