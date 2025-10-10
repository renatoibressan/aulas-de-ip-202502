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

void print_bytes(const void * end_byte, int n) {
    int i;
    for (i = 0; i < n; i++) {
        print_byte(end_byte + i);
        printf(" ");
    }
    printf("\n");
}

int main() {
    double n;
    scanf("%lf", &n);
    unsigned char c = n;
    unsigned short s = n;
    unsigned int i = n;
    float f = n;
    double d = n;
    print_bytes((unsigned char *)&c, sizeof(unsigned char));
    print_bytes((unsigned char *)&s, sizeof(unsigned short));
    print_bytes((unsigned char *)&i, sizeof(unsigned int));
    print_bytes((unsigned char *)&f, sizeof(float));
    print_bytes((unsigned char *)&d, sizeof(double));
    return 0;
}