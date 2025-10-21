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
    int i, v[N] = {0};
    for (i = 0; i < n; i++) {
        v[i] = m[i][i];
        printf("%d\n", v[i]);
    }
    return 0;
}