#include <stdio.h>

int main() {
    int n;
    int qnp = 0, qni = 0, sp = 0, si = 0;
    double mp, mi;
    while (scanf("%d", &n) != EOF && n != 0) {
        if (n % 2 == 0) {
            sp = sp + n;
            qnp++;
        } 
        if (n % 2 == 1 || n % 2 == -1) {
            si = si + n;
            qni++;
        }
    }
    if (qnp == 0) {
        qnp = 1;
    }
    mp = sp / (qnp * 1.0);
    printf("MEDIA PAR: %lf\n", mp);
    if (qni == 0) {
        qni = 1;
    }
    mi = si / (qni * 1.0);
    printf("MEDIA IMPAR: %lf\n", mi);
    return 0;
}