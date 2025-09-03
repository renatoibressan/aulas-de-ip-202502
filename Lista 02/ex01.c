#include <stdio.h>

int main() {
    float n1, n2, n3, M;
    scanf("%f %f %f", &n1, &n2, &n3);
    M = (n1 + n2 + n3)/3;
    if (M >= 6) {
        printf("MEDIA = %.2f\n", M);
        printf("APROVADO\n");
    } else if (M < 6) {
        printf("MEDIA = %.2f\n", M);
        printf("REPROVADO\n");
    }
    return 0;
}