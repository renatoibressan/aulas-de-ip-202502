#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float d;

    // printf("Entre com o valor de x1: ");
    scanf("%f", &x1);

    // printf("Entre com o valor de y1: ");
    scanf("%f", &y1);

    // printf("Entre com o valor de x2: ");
    scanf("%f", &x2);

    // printf("Entre com o valor de y2: ");
    scanf("%f", &y2);

    // calcula o valor da distância;
    d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("A DISTANCIA ENTRE A e B = %.2f\n", d);

    return 0;

}
