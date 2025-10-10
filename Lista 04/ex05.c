#include <stdio.h>
#include <math.h>

float raizesEq2Grau(float a, float b, float c, float x1, float x2) {
    float delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        x1 = (-1 * b - sqrt(delta)) / (2 * a);
        x2 = (-1 * b + sqrt(delta)) / (2 * a);
        if (x1 > x2) printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x2, x1);
        else printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        return 2;
    } else if (delta == 0) {
        x1 = (-1 * b) / (2 * a);
        printf("RAIZ UNICA\nX1 = %.2f\n", x1);
        return 1;
    } else {
        printf("RAIZES IMAGINARIAS\n");
        return 0;
    }
}

int main() {
    float a, b, c, x1 = 0, x2 = 0;
    scanf("%f %f %f", &a, &b, &c);
    raizesEq2Grau(a, b, c, x1, x2);
    return 0;
}