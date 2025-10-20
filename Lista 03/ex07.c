#include <stdio.h>
#include <string.h>
#define N 999999
// Zero Vale Zero
int main() {
    int m = 1;
    int n = 1;
    while (m != 0 && n != 0) {
        scanf("%d %d", &m, &n);
        int soma = m + n;
        char v[N];
        sprintf(v, "%d", soma);
        int i;
        for (i = 0; v[i] != '\0'; i++) {
            if (v[i] != '0') {
                printf("%c", v[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
