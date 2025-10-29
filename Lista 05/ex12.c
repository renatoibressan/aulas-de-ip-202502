#include <stdio.h>

int main() {
    int l, c;
    scanf("%d %d", &l, &c);
    if (l <= 1 || l > 1000) return 0;
    if (c <= 1 || c > 1000) return 0;
    int m[l][c], i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    int freq1[1000] = {0}, freq2[1000] = {0};
    int maior = 0, menor = 1000;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            freq1[m[i][j]]++;
            freq2[m[i][j]]++;
        }
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
                freq1[maior] = freq1[m[i][j]];
            }
        }
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (m[i][j] < menor) {
                menor = m[i][j];
                freq2[menor] = freq2[m[i][j]];
            }
        }
    }
    double freqMaior = (freq1[maior] * 100.00) / (l * c) * 1.00;
    double freqMenor = (freq2[menor] * 100.00) / (l * c) * 1.00;
    printf("%d %.2lf%c\n", menor, freqMenor, '%');
    printf("%d %.2lf%c\n", maior, freqMaior, '%');
    return 0;
}