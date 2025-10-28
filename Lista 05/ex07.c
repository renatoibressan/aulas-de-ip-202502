#include <stdio.h>
// Desenha losango
int main() {
    int losango[99][99], tam, fim;
    char borda, centro;
    scanf("%d%*c %c%*c %c%*c", &tam, &borda, &centro);
    if (tam < 1 || tam > 99 || tam % 2 == 0) {
        printf("Dimensao invalida!\n");
        return 0;
    }
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            losango[i][j] = ' ';
        }
    }
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (i <= (tam / 2) && j <= (tam / 2)) losango[i][(tam / 2) - i] = borda;
            else if (i <= (tam / 2) && j > (tam / 2)) losango[i][(tam / 2) + i] = borda;
            else if (i > (tam / 2) && j > (tam / 2)) losango[i][(tam / 2) - (tam - i - 1)] = borda;
            else if (i > (tam / 2) && j <= (tam / 2)) losango[i][(tam / 2) + (tam - i - 1)] = borda;
        }
    }
    for (i = 1; i < (tam - 1); i++) {
        fim = 0;
        for (j = (tam - 1); fim == 0; j--) {
            if ((losango[i][j]) == borda) fim = j;
        }
        for (j = 0; j < (fim - 1); j++) {
            if (losango[i][j] != ' ') losango[i][j + 1] = centro;
        }
    }
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%c ", losango[i][j]);
        }
        printf("\n");
    }
    return 0;
}
