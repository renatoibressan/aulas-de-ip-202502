#include <stdio.h>
#include <string.h>

char str_clean(char str[], char clr[]);

int main() {
    char str[260];
    char clr[260];
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}

char str_clean(char str[], char clr[]) {
    int size1 = strlen(str);
    int size2 = strlen(clr);
    int i, j = 0, k = 0;
    for (i = 0; i < size1; i++) {
        for(j = 0; j < size2; j++) {
            if (str[i] == clr[j]) {
                for (k = i; k < size1; k++) {
                    str[k] = str[k + 1];
                }
                size1--;
                i--;
            }
        }
    }
    return *str;
}