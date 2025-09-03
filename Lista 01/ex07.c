#include <stdio.h>
#include <math.h>

int main() {
    float H, a;
    float Ab;
    float x;

    // printf("Entre com o valor da altura: ");
    scanf("%f", &H);

    // printf("Entre com o valor da aresta: ");
    scanf("%f", &a);

    // calcula o valor da área da base;
    Ab = (3 * a * a * sqrt(3))/2;
    // calcula o valor do volume da pirâmide;
    x = (Ab * H)/3;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", x);

    return 0;
}
