#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 200
#define MAX_WORD_LEN 65

int eh_delimitador(char c, char * del) {
    while (*del != '\0') {
        if (c == *del) return 1;
        del++;
    }
    return 0;
}

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep) {
    int count = 0, length = 0;
    char palavra[MAX_WORD_LEN] = {0};
    while (*str != '\0') {
        if (!eh_delimitador(*str, sep) && length < MAX_WORD_LEN - 1) {
            palavra[length++] = *str;
        } else if (length > 0) {
            palavra[length] = '\0';
            strcpy(m[count++], palavra);
            length = 0;
            memset(palavra, 0, sizeof(palavra));
        }
        str++;
    }
    if (length > 0) {
        palavra[length] = '\0';
        strcpy(m[count++], palavra);
    }
    return count;
}

int main() {
    char txt[1001];
    char delimitadores[100];
    scanf("%[^\n]", txt);
    getchar();
    scanf("%[^\n]", delimitadores);
    char palavras[MAX_WORDS][MAX_WORD_LEN];
    int count = str_split(txt, palavras, delimitadores);
    int i, maxLength = 0;
    for (i = 0; i < count; i++) {
        int length = strlen(palavras[i]);
        if (length > maxLength) maxLength = length;
        printf("(%d)%s\n", length, palavras[i]);
    }
    int maxlenCount = 0;
    for (i = 0; i < count; i++) {
        if (strlen(palavras[i]) == maxLength) maxlenCount++;
    }
    printf("%d\n", maxlenCount);
    return 0;
}