#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    printf("Choose a number from 0 to 10: ");
    scanf("%d", &i);
    if (i < 0 || i > 10) {
        printf("%d is an invalid number!\n", i);
        return 0;
    }
    int j = rand() % 11;
    if (i != j) printf("Wrong number!\n");
    else printf("%d is the correct number!\n", i);
    return 0;
}