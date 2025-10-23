#include <stdio.h>
#include <string.h>
// Frequência de Strings
char delimitador[11] = {' ', '.', ',', '!', '?', '(', ')', '[', ']', '{', '}'};

int temDelimitador(char c) {
    int i;
    for (i = 0; i < 11; i++) {
        if (c == delimitador[i]) return 1;
    }
    return 0;
}

int frequenciaStrings(const char * str1, char * str2) {
    int tamanho = strlen(str2);
    if (tamanho == 0) return 0;
    int count = 0;
    const char *p = str1;
    while ((p = strstr(p, str2)) != NULL) {
        char anterior;
        if (p == str1) anterior = ' ';
        else anterior = *(p - 1);
        char posterior = *(p + tamanho);
        if ((temDelimitador(anterior) == 1 || p == str1) && (temDelimitador(posterior) == 1 || posterior == '\0')) count++;
        p += tamanho;
    }
    return count;
}

int strCmp(char const * txt, char const * palavras) {
    int i = 0;
    while (txt[i] == palavras[i] && txt[i] != '\0' && palavras[i] != '\0') i++;
    return txt[i] - palavras[i];
}

int strCpy(char * destino, char const * fonte) {
    int i = 0;
    while(fonte[i] != '\0') {
        destino[i] = fonte[i];
        i++;
    }
    destino[i] = '\0';
    return i;
}

void separaPalavras(char * const txt, char * palavras) {
    int i, j = 0, k;
    char ultima[1028] = "";
    for (i = 0; i <= strlen(txt); i++) {
        int checkup = 0;
        for (k = 0; k < 11; k++) {
            if (txt[i] == delimitador[k] || txt[i] == '\0') {
                checkup = 1;
                break;
            }
        }
        if (checkup == 1) {
            if (j > 0) {
                palavras[j] = '\0';
                if (strCmp(palavras, ultima) != 0) {
                    int qtd = frequenciaStrings(txt, palavras);
                    printf("(%s)%d\n", palavras, qtd);
                    strCpy(ultima, palavras);
                }
                j = 0;
            }
        } else {
            palavras[j] = txt[i];
            j++;
        }
    }
}

int main() {
    char txt[2055];
    char palavras[1028];
    scanf("%[^\n]%*c", txt);
    separaPalavras(txt, palavras);
    return 0;
}
