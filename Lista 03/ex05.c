#include <stdio.h>
#define n 10000

int main() {
    int i, j;
    char v[n];
    int letras;
    int vogais;
    int consoantes;
    scanf("%d", &i);
    while (i--) {
        letras = 0;
        vogais = 0;
        consoantes = 0;
        scanf(" %[^\n]", v);
        for (j = 0; v[j] != '\0'; j++) {
            if (v[j] >= 65 && v[j] <= 90) {
                letras++;
                if (v[j] == 65 || v[j] == 69 || v[j] == 73 || v[j] == 79 || v[j] == 85) {
                    vogais++;
                } else {
                    consoantes++;
                }
            }
            if (v[j] >= 97 && v[j] <= 122) {
                letras++;
                if (v[j] == 97 || v[j] == 101 || v[j] == 105 || v[j] == 111 || v[j] == 117) {
                    vogais++;
                } else {
                    consoantes++;
                }
            }
        }
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }
    return 0;
}