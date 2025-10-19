#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char v[205];
    int i;
    for (i = 0; i < n; i++) {
        scanf(" %[^\n]", v);
        int j;
        for (j = 0; v[j] != '\0'; j++) {
            if (v[j] >= 'A' && v[j] <= 'Z') v[j] += 32;
        }
        int freq[256] = {0};
        for (j = 0; v[j] != '\0'; j++) {
            char x = v[j];
            freq[x] += 1;
        }
        freq[32] = 0;
        int maior = 0;
        for (j = 0; j < 256; j++) {
            if (freq[j] > maior) maior = freq[j];
        }
        for (j = 0; j < 256; j++) {
            if (freq[j] == maior) printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}