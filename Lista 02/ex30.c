#include <stdio.h>

int main() {
    int n, p, m, c, i;
    unsigned long int fm;
    scanf("%d %d", &p, &n);
    if (n < 0 || p < 0 || n < p) {
        return 0;
    } else {
        for (i = p; i <= n; i++) {
            int j, fi = 1;
            for (j = 1; j <= i; j++) {
                fi *= j;
            }
            for (j = 0; j <= i; j++) {
                fm = 1;
                m = i - j;
                int k, fj = 1;
                for (k = 1; k <= j; k++) {
                    fj *= k;
                }
                for (k = 1; k <= m; k++) {
                    fm *= k;
                }
                c = fi / (fj * fm);
                if (j < i) {
                    printf("%d,", c);
                } else {
                    printf("%d", c);
                }
            }
            printf("\n");
        }
    }
    return 0;
}