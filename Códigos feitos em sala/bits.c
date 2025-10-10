#include <stdio.h>

void print_byte(unsigned char const * pc) {
    int i;
    int w = 128;
    unsigned char x = *pc;
    for (i = 0; i < 8; i++) {
        printf("%d", x / w);
        x = x % w;
        w = w / 2;
    }
}

void pBytes(unsigned char * v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        print_byte(v + i);
        printf(" ");
    }
    printf("\n");
}

int main() {
    int x;
    double y;
    scanf ("%d %lf", &x, &y);
    pBytes((unsigned char *)&x, sizeof(int));
    pBytes((unsigned char *)&y, sizeof(double));
    return 0;
}
