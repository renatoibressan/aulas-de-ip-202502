#include <stdio.h>

int main() {
    int a, b, c;
    int *p;
    a = 1;
    b = 2;
    c = 3;
    p = &b;
    *p *= 10;
    printf("%p\n%p\n%p\n", &a, &b, &c);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}