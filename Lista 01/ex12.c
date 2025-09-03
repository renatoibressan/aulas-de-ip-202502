#include <stdio.h>

int main() {
    double m, a, t;
    double M, v, V, s, W;

    // printf("Entre com o valor da massa: ");
    scanf("%lf", &m);

    // printf("Entre com o valor da aceleração: ");
    scanf("%lf", &a);

    // printf("Entre com o valor do tempo em segundos: ");
    scanf("%lf", &t);

    // converte a massa do avião de toneladas para quilogramas
    M = m * 1000;
    // calcula o valor da velocidade;
    v = a * t;
    // converte o valor da velocidade de m/s para Km/h;
    V = v * 3.6;
    // calcula o espaço percorrido;
    s = (a * t * t)/2;
    // calcula o trabalho realizado;
    W = (M * v * v)/2;
    printf("VELOCIDADE = %.2lf\n", V);
    printf("ESPACO PERCORRIDO = %.2lf\n", s);
    printf("TRABALHO REALIZADO = %.2lf\n", W);

    return 0;
}