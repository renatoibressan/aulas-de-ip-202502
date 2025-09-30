#include <stdio.h>

int main() {
    double a, b, c;
    char d, e, f;
    char *g, *h, *i;
    int j = 1, k = 2, l = 3;
    int *z;
    printf("a: %p, b: %p, c: %p;\n", &a, &b, &c); // a: 0061FF10, b: 0061FF08, c: 0061FF00;
    printf("d: %p, e: %p, f: %p;\n", &d, &e, &f); // d: 0061FEFF, e: 0061FEFE, f: 0061FEFD;
    printf("g: %p, h: %p, i: %p;\n", &g, &h, &i); // g: 0061FEF8, h: 0061FEF4, i: 0061FEF0;
    printf("Para y(x) = x, tem-se que:\n");
    printf("y(1) = %d, y(2) = %d, y(3) = %d, ", j, k, l); // y(1) = 1, y(2) = 2, y(3) = 3
    z = &j;
    *z = 100;
    z = &k;
    *z = 200;
    z = &l;
    *z = 300;
    printf("y(100) = %d, y(200) = %d, y(300) = %d;\n", j, k, l); // y(100) = 100, y(200) = 200, y(300) = 300;
    return 0;
}