#include <stdio.h>
#include <string.h>
// Sequência Espelho
int main() {
    int c;
    scanf("%d", &c);
    int b, e, i;
    for (i = 0; i < c; i++) {
        scanf("%d %d", &b, &e);
        if (b > e) break;
        if (e > 12221) break;
        char num[50000];
        int j, position = 0;
        for (j = b; j <= e; j++) {
            sprintf(num + position, "%d", j);
            position = strlen(num);
        }
        printf("%s", num);
        for (j = strlen(num) - 1; j >= 0; j--) printf("%c", num[j]);
        printf("\n");
    }
    return 0;
}
