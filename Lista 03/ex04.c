#include <stdio.h>
#define n 1000
// LED
int main() {
    int led[] = {2, 5, 5, 4, 5, 6, 3, 7, 6, 6}, k = 0, soma = 0;
    char num[100];
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        return 0;
    }
    int i, j;
    for (j = 0; j < k; j++) {
        scanf("%s", num);
        soma = 0;
        for (i = 0; num[i] != '\0'; i++) {
            switch (num[i]) {
                case '1':
                    soma += led[0];
                    break;
                case '2':
                    soma += led[1];
                    break;
                case '3':
                    soma += led[2];
                    break;
                case '4':
                    soma += led[3];
                    break;
                case '5':
                    soma += led[4];
                    break;
                case '6':
                    soma += led[5];
                    break;
                case '7':
                    soma += led[6];
                    break;
                case '8':
                    soma += led[7];
                    break;
                case '9':
                    soma += led[8];
                    break;
                case '0':
                    soma += led[9];
                    break;
                default:
                    break;
            }
        }
        printf("%d leds\n", soma);
    }
    return 0;
}
