#include <stdio.h>

int main() {
    float F;
    float p;
    float X;
    float Y;

    // printf("Entre com o valor em Fahrenheit: ");
    scanf("%f", &F);

    // printf("Entre com o valor em polegadas: ");
    scanf("%f", &p);

    // converte o valor em Fahrenheit pra Celsius;
    X = (5 * F - 160)/9;
    // converte o valor em polegadas pra milímetros;
    Y = p * 25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", X);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", Y);

    return 0;
}
