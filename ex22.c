#include <stdio.h>

char str_clean(char str, char clr);

int main() {
    char str[256];
    char clr[256];
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}

char str_clean(char str, char clr) {
    int *i, *j = 0;
    for (i = 0; str[i] != '\0'; i++) {}
}