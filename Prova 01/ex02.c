#include <stdio.h>
 
int main() {
    int n;
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int b1, b2;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &b1, &b2);
        int soma=a1+a2+a3+a4+a5+a6+a7+a8+a9+b1+b2;
        if (soma%11==0) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
