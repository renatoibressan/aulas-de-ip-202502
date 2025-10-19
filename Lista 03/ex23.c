#include <stdio.h>

int main() {
    char v[60];
    while (scanf("%[^\n]%*c", v) != EOF) {
        int i, letra = 0;
        for (i = 0; v[i] != '\0'; i++) {
            if (v[i] >= 'A' && v[i] <= 'Z') {
                if (letra % 2 == 1) v[i] += 32;
                letra++;
            }
            else if (v[i] >= 'a' && v[i] <= 'z') {
                if (letra % 2 == 0) v[i] -= 32;
                letra++;
            }
        }
        printf("%s\n", v);
    }
    return 0;
}