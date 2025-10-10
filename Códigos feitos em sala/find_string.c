#include <stdio.h>

int str_finds(char const * A, char const * B) {
    int i = 0, k;
    while (A[i] != '\0') {
        k = 0;
        while (A[i + k] == B[k] && A[i + k] != '\0' && B[k] != '\0') k++;
        if (B[k] == '\0') return i;
        i++;
    }
    return -1;
}

int main() {
    char a[101], b[101];
    scanf("%[^\n]%*c %[^\n]%*c", a, b);
    printf("%d", str_finds(a, b));
    return 0;
}