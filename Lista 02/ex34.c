#include <stdio.h>
//  Transforma decimal em fração
int main() {
    double n;
    int num, den = 1;
    int menor;
    int i;
    scanf("%lf", &n);
    while (n != (int)n) {
        n *= 10;
        den *= 10;
    }
    num = n;
    if (num > den) {
        menor = den;
    } else if (den > num) {
        menor = num;
    }
    for (i = 2; i <= menor; i++) {
        while (num % i == 0 && den % i == 0) {
            num /= i;
            den /= i;
        }
    }
    printf("%d/%d\n", num, den);
    return 0;
}

