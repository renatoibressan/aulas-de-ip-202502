#include <stdio.h>
#define n 100000
// Achei
int main() {
    int t;
    int v[n];
    int m;
    int k;
    scanf("%d", &t);
    if (t < 1 || t > 100000) {
        return 0;
    }
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);
    if (m < 1 || m > 1000) {
        return 0;
    }
    while (m--) {
        scanf("%d", &k);
        for (i = 0; i < t; i++) {
            if (k == v[i]) {
                printf("ACHEI\n");
                break;
            }
        }
        if (i == t) {
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}
