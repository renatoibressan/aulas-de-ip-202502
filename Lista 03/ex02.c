#include <stdio.h>
#define n 1000
// Contagem
int main() {
    int t;
    int v[n];
    int k;
    int dif = 0;
    scanf("%d", &t);
    if (t <= 0 || t > n) {
        return 0;
    }
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < t; i++) {
        if (v[i] >= k) {
            dif++;
        }
    }
    printf("%d\n", dif);
    return 0;
}
