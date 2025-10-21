#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int v[1010], i;
    int cedo = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] <= 0) cedo++;
    }
    if (cedo < k) printf("SIM\n");
    else if (cedo >= k) {
        printf("NAO\n");
        for (i = n - 1; i >= 0; i--) {
            if (v[i] <= 0) printf("%d\n", i + 1);
        }
    }
    return 0;
}