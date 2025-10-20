#include <stdio.h>
// Mínimo múltiplo comum
int main() {
    int n1, n2, n3;
    int mmc = 1;
    int i;
    scanf("%d%d%d", &n1, &n2, &n3);
    i = 2;
    while (1) {
        if (n1 == 1 && n2 == 1 & n3 == 1) {
            break;
        }
        if (n1 % i == 0 || n2 % i == 0 || n3 % i == 0) {
            printf("%d %d %d :%d\n", n1, n2, n3, i);
                if (n1 % i == 0) {
                    n1 /= i;
                }
                if (n2 % i == 0) {
                    n2 /= i;
                }
                if (n3 % i == 0) {
                    n3 /= i;
                }
                mmc *= i;
        } else {
            i++;
        }
    }
    printf("MMC: %d\n", mmc);
    return 0;

}
