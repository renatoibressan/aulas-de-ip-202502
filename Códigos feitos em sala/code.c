#include <stdio.h>
#define n 100

int main(void) {
    int v[n], t, x, i, h;
    scanf("%d", &t);
    i = 0;
    while (i < t) {
        scanf("%d", &x);
        for (h = 0; h < i; h++) {
            if (v[h] == x) break;
        }
        if (h == i) {
            v[i] = x;
            i++;
        }
    }
    printf("[");
    for (h = 0; h < t; h++) {
        if (h == 0) {
            printf("%d", v[h]);
        }
        if (h > 0) {
            printf(", %d", v[h]);
        }
    }
    printf("]\n");
    return 0;
}
