#include <stdio.h>

int main() {
    int n;
    int d1, d2, d3, d4, d5;
    scanf("%d", &n);
    d1 = n / 10000;
    d2 = (n - (d1 * 10000)) / 1000;
    d3 = (n - (d1 * 10000) - (d2 * 1000)) / 100;
    d4 = (n - (d1 * 10000) - (d2 * 1000) - (d3 * 100)) / 10;
    d5 = (n - (d1 * 10000) - (d2 * 1000) - (d3 * 100) - (d4 * 10));
    if (n >= 10000 && n <= 99999) {
        if (d1 == d5 && d2 == d4) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else if (n >= 1000 && n <= 9999) {
        if (d2 == d5 && d3 == d4) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else if (n >= 100 && n <= 999) {
        if (d3 == d5) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else if (n >= 10 && n <= 99) {
        if (d4 == d5) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
    } else {
        printf("NUMERO INVALIDO\n");
    }
    return 0;
}