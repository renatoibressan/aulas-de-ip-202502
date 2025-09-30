#include <stdio.h>

int dec2bin(int n) {
    int binario[32];
    int i = 0;
    if (n == 0) printf("0");
    while (n > 0) {
        binario[i] = n % 2;
        n /= 2;
        i++;
    }
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int decimal = 1;
    while (scanf("%d", &decimal) != EOF) {
        dec2bin(decimal);
    }
    return 0;
}