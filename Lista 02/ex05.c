#include <stdio.h>
//  Divisível por 3 e 5
int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0) {
        printf("O NUMERO E DIVISIVEL\n");
    } else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
    return 0;
}
