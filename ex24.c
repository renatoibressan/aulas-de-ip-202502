#include <stdio.h>

long int string2int(const char * str);

int main() {
    char str[129];
    while (scanf("%s", str) != EOF) {
        long int n = string2int(str);
        printf("%ld %ld\n", n, n * 2);
    }
    return 0;
}

long int string2int(const char * str) {
    int n;
    while (*str != '\0') {
        n = *str - '0';
        *str++;
    }
    return n;
}