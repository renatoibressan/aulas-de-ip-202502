#include <stdio.h>
#include <math.h>
// Série de Taylor para a função e**x
unsigned long int fatorial(int a) {
    int i = 1;
    unsigned long int f = 1;
    while (i <= a) {
        f *= i;
        i++;
    }
    return f;
}

int main() {
    float x; 
    int N;
    scanf("%f %d", &x, &N);
    double soma = 0;
    int i;
    for (i = 0; i <= N; i++) {
        soma += pow(x, i) / fatorial(i);
    }
    printf("e^%.2f = %lf\n", x, soma);
    return 0;
}
