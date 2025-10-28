#include <stdio.h>
// Cálculo da raiz quadrada
double absoluto(double n) {
    if (n < 0) return -n;
    else return n;
}

double raiz(double n, double p) {
    double raiz, aprox = 1, err;
    raiz = (aprox + n / aprox) / 2;
    aprox = raiz;
    err = absoluto(raiz * raiz - n);
    printf("r: %.9lf, err: %.9lf\n", raiz, err);
    while (err > p) {
        raiz = (aprox + n / aprox) / 2;
        aprox = raiz;
        err = absoluto(raiz * raiz - n);
        printf("r: %.9lf, err: %.9lf\n", raiz, err);
    }
}

int main() {
    double n, e;
    scanf("%lf %lf", &n, &e);
    raiz(n, e);
    return 0;
}
