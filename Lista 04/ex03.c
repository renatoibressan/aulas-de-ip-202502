#include <stdio.h>
// Número Invertido
int separaDigitos(int abc, int a, int b, int c) {
    int ab = abc / 10;
    b = ab % 10;
    a = (ab - b) / 10;
    c = abc % 10;
    printf("%d%d%d\n", c, b, a);
}

int main() {
    int abc, a = 0, b = 0, c = 0;
    scanf("%d", &abc);
    if (abc % 10 == 0 || abc < 100 || abc > 999) return 0;
    separaDigitos(abc, a, b, c);
    return 0;
}
