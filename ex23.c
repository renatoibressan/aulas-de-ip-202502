#include <stdio.h>

int main() {
    char v[51];
    int i;
    while (scanf("%[^\n]%*c", v) != EOF) {
        for (i = 0; v[i] != '\0'; i+=2) {
            if (v[i] >= 'a' && v[i] <= 'z') v[i] -= 32;
            else if (v[i + 1] >= 'A' && v[i + 1] <= 'Z') v[i + 1] += 32;
            else if (v[i] == 32) i--;
        }
        printf("%s\n", v);
    }
    return 0;
}