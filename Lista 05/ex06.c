#include <stdio.h>
#define NL 100
#define NC 100
// Desenha bordas
int main() {
    int m[NL][NC];
    int nl, nc, k, x;
    scanf("%d %d %d %d", &nl, &nc, &k, &x);
    printf("P2\n");
    printf("%d %d\n", nl, nc);
    printf("%d\n", 255);
    int l, c;
    for (l = 0; l < nc; l++) {
        for (c = 0; c < nl; c++) {
            m[l][c] = x;
        }
    }
    for (l = k; l < nc - k; l++) {
        for (c = k; c < nl - k; c++) {
            m[l][c] = 0;
        }
    }
    for (l = 0; l < nc; l++) {
        for (c = 0; c < nl; c++) {
            printf("%d ", m[l][c]);
        }
        printf("\n");
    }
    return 0;
}
