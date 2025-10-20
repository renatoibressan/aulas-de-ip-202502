#include <stdio.h>
// Ordena 3 números
int main() {
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a <= b && a <= c && b <= c) {
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    } else if (a <= b && a <= c && b >= c) {
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    } else if (a >= b && a <= c && b <= c) {
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    } else if (a <= b && a >= c && b >= c) {
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    } else if (a >= b && a >= c && b <= c) {
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    } else if (a >= b && a >= c && b >= c) {
        printf("%.2f,%.2f, %.2f\n", c, b, a);
    }
    return 0;
}
