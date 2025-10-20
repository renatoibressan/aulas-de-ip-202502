#include <stdio.h>
// string to int
long int string2int(const char * str);

int main() {
    long int n;
    char str[200];
    while (scanf("%s", str) != EOF) {
        n = string2int(str);
        printf("%ld %ld\n", n, n * 2);
    }
    return 0;
}

long int string2int(const char * str) {
    int negativo = 0;
    long int n = 0;
    if (str[0] == '-') {
        negativo = 1;
        *str++;
    }
    while (*str != '\0') {
        n = n * 10 + (*str - '0');
        *str++;
    }
    if (negativo == 1) return -n;
    else return n;
}
