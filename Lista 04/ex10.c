#include <stdio.h>

double compute_pi(int n) {
    double x = 1.0;
    int i = 1, j = 1;
    for (j = 1; j <= n; j++) {
        double t1 = (2.0 * i) / (2.0 * i - 1.0);
        x = x * t1;
        j++;
        if (j > n) break;
        double t2 = (2.0 * i) / (2.0 * i + 1.0);
        x = x * t2;
        i++;
    }
    return x * 2;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.12lf\n", compute_pi(n));
    return 0;
}