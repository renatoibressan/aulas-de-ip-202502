#include <stdio.h>

int main() {
    int a, b, c;
    int *p;
    a = 1;
    b = 2;
    c = 3;
    p = &b;
    *p *= 10;
    printf("a: %p\nb: %p\nc: %p\n", &a, &b, &c);
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    printf("%p => %lu\n", &a, (long unsigned int)&a);
    return 0;
}