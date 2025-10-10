#include <stdio.h>

int str_cmp(char const * A, char const * B) {
    int i = 0;
    while (A[i] == B[i] && A[i] != '\0' && B[i] != '\0') i++;
    return A[i] - B[i];
}

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);
    printf("%d", str_cmp(a, b));
    return 0;
}