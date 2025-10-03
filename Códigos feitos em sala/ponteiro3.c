#include <stdio.h>

void trade(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d equivale a ", x, y);
    trade(&x, &y);
    printf("%d + %d\n", x, y);
    return 0;
}
