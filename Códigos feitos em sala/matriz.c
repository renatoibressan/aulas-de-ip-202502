#include <stdio.h>
#include <stdlib.h>
#define NL 100
#define NC 100

void scan_mat(int A[NL][NC], int nl, int nc) {
    int l, c;
    for (l = 0; l < nl; l++) {
        printf("Lendo a linha %d: ", l);
        for (c = 0; c < nc; c++) {
            scanf("%d", &A[l][c]);
        }
    }
}
void print_mat(int A[NL][NC], int nl, int nc) {
    int l, c;
    if (nl > NL || nc > NC) {
        printf("Tamanho invalido\n");
        exit(0);
    }
    for (l = 0; l < nl; l++) {
        for (c = 0; c < nc; c++) {
            printf(" %d ", A[l][c]);
        }
        printf("\n");
    }
}
int main() {
    int A[NL][NC];
    scan_mat(A, 2, 2);
    print_mat(A, 2, 2);
    return 0;
}