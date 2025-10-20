#include <stdio.h>
#include <string.h>
#include <math.h>

double string2double(const char * str);

int main() {
    double n;
    char str[200];
    while (scanf("%s", str) != EOF) {
        n = string2double(str);
        printf("%.3lf %.3lf\n", n, n + n);
    }
    return 0;
}

double string2double(const char * str) {
    int negativo = 0;
    double n1 = 0.0, n2 = 0.0;
    if (str[0] == '-') {
        negativo = 1;
        *str++;
    }
    char *decimal;
    int decimais = 0;
    decimal = strchr(str, '.');
    while (*str != '\0') {
        if (decimal != NULL) {
            decimais = strlen(decimal + 1);
            n1 = n1 * 10 + (*str - '0') / pow(10, decimais);
            *str++;
            if (*str == '.') *str++;
        } else {
            n1 = n1 * 10 + (*str - '0');
            *str++;
        }
    }
    if (negativo == 1) return -n1;
    else return n1;
}