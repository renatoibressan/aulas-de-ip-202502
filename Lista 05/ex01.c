#include <stdio.h>
// Determinante 2x2
int main() {
    double m[2][2];
    scanf("%lf %lf %lf %lf", &m[0][0], &m[0][1], &m[1][0], &m[1][1]);
    double d = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
    printf("%.2lf\n", d);
    return 0;
}
