#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[100][100], l, c;
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    int k, i, j, swap = 0;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (m[i][k] > m[j][k]) {
                    swap = m[i][k];
                    m[i][k] = m[j][k];
                    m[j][k] = swap;
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}