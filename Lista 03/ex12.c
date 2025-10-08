#include <stdio.h>
#define N 1000000

int v[N];
int main() {
    int n = 1;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    int j, k, swap;
    for (j = 0; j < n - 1; j++) {
        for (k = 0; k < n - 1 - j; k++) {
            if (v[k] > v[k + 1]) {
                swap = v[k];
                v[k] = v[k + 1];
                v[k + 1] = swap;
            }
        }
    }
    int l;
    double mediana = 0.0;
    for (l = 0; l < n; l++) {
        if (n % 2 == 0) mediana = (v[l / 2] + v[(l / 2) + 1]) / 2.0;
        else if (n % 2 != 0) mediana = v[(1 + l) / 2];
    }
    printf("%.2lf\n", mediana);
    return 0;
}