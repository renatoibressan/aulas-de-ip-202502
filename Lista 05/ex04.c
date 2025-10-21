#include <stdio.h>
// Quadrado de matriz 2x2
int main() {
    float m[2][2];
    scanf("%f %f %f %f", &m[0][0], &m[0][1], &m[1][0], &m[1][1]);
    float x1 = (m[0][0] * m[0][0]) + (m[1][0] * m[0][1]);
    float x2 = (m[0][0] * m[0][1]) + (m[0][1] * m[1][1]);
    float x3 = (m[0][0] * m[1][0]) + (m[1][0] * m[1][1]);
    float x4 = (m[1][0] * m[0][1]) + (m[1][1] * m[1][1]);
    printf("%.3lf %.3lf\n%.3lf %.3lf\n", x1, x2, x3, x4);
    return 0;
}
