#include <stdio.h>
#define N 1000

int main() {
    int n;
    scanf("%d", &n);
    int m[n][n];
    int l, c;
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    int i, j, k, v[N];
    for (i = 0, j = n - 1, k = 0; i < n, j >= 0, k < n; i++, j--, k++) {
        if (i + j == n - 1) v[k] = m[i][j];
        printf("%d\n", v[k]);
    }
    return 0;
}