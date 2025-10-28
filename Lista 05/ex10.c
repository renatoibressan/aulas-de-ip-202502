#include <stdio.h>

int main() {
    int l, c;
    scanf("%d %d", &l, &c);
    int m[l][c], i, j;
    int top, bottom, left, right;
    int wally = 0;
    int posI = -1, posJ = -1;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < l && !wally; i++) {
        for (j = 0; j < c && !wally; j++) {
            if (m[i][j] == 1111) {
                top = m[(i - 1 + l) % l][j];
                bottom = m[(i + 1) % l][j];
                left = m[i][(j - 1 + c) % c];
                right = m[i][(j + 1) % c];
                if (top == 4 && bottom == 8 && left == 0 && right == 0) {
                    posI = i;
                    posJ = j;
                    wally = 1;
                }
            }
        }
    }
    if (wally == 1) printf("%d %d\n", posI, posJ);
    else printf("WALLY NAO ESTA NA MATRIZ\n");
    return 0;
}