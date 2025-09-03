#include <stdio.h>

int main() {
    float sm, kw;
    float X, Y, Z;

    // printf("Entre com o valor do salário: ");
    scanf("%f", &sm);

    // printf("Entre com o valor do consumo em kW: ");
    scanf("%f", &kw);

    // calcula o custo por kW;
    X = (7 * sm)/1000;
    // calcula o custo do consumo;
    Y = X * kw;
    // calcula o custo com desconto;
    Z = (90 * Y)/100;
    printf("Custo por kW: R$ %.2f\n", X);
    printf("Custo do consumo: R$ %.2f\n", Y);
    printf("Custo com desconto: R$ %.2f\n", Z);

    return 0;
}
