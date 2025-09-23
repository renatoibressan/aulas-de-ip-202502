#include <stdio.h>
#define n 1024

int main() {
    char txt[n];
    while (1) {
        if (EOF == scanf("%[^\n]%*c", txt)) break;
        printf("%s\n", txt);
    }
    return 0;
}