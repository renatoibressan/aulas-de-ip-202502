#include <stdio.h>
#define n 1000

int main() {
    int t;
    int v[n];
    int par = 0;
    int qtd = 0;
    scanf("%d", &t);
    if (t < 1 || t > n) {
        return 0;
    }
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < t; i++) {
        if (v[i] % 2 == 0) {
            par = v[i];
            qtd++;
            printf("%d ", par);
        }
    }
    printf("%d\n", qtd);
    return 0;
}