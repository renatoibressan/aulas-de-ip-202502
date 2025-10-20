#include <stdio.h>
#include <math.h>
// Raízes de equações de grau 2
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        float x1 = (-1 * b - sqrt(delta)) / (2 * a);
        float x2 = (-1 * b + sqrt(delta)) / (2 * a);
        if (x1 > x2) {
            printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x2, x1);
        } else {
            printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
        }
    } else if (delta == 0) {
        float x = (-1 * b) / (2 * a);
        printf("RAIZ UNICA\nX1 = %.2f\n", x);
    } else {
        printf("RAIZES IMAGINARIAS\n");
    }
    return 0;
}
