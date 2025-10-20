#include <stdio.h>
#include <string.h>
// Criptografia
int main() {
    int n;
    char c[1001], aux;
    int i, j;
    scanf("%d", &n);
    while (n--) {
        scanf("%*c%[^\n]", c);
        for (i = 0; c[i] != '\0'; i++) {
            if (c[i] >= 'A' && c[i] <= 'Z' || c[i] >= 'a' && c[i] <= 'z') {
                c[i] += 3;
            }
        }
        for (i = 0, j = strlen(c) - 1; i < strlen(c) / 2; i++, j--) {
            aux = c[i];
            c[i] = c[j];
            c[j] = aux;
        }
        for (i = strlen(c) / 2; c[i] != '\0'; i++) {
            c[i] -= 1;
        }
        printf("%s\n", c);
    }
    return 0;
}


