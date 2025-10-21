#include <stdio.h>
#define NMAX_W 100
#define NMAX_CHW 50
#define NMAX_LINE NMAX_CHW * NMAX_W + NMAX_W
// Aliteração
void extraiIniciais(char * const txt, char * iniciais, int * n) {
    int i = 0, k = 0;
    while (txt[i] != '\0') {
        while (txt[i] == ' ') i++;
        if (txt[i] == '\0') break;
        if (txt[i] >= 'A' && txt[i] <= 'Z') iniciais[k] = txt[i] + 32;
        else iniciais[k] = txt[i];
        k++;
        while (txt[i] != ' ' && txt[i] != '\0') i++;
    }
    *n = k;
}

int contaAliteracao(char * const iniciais, int n) {
    int i = 1, alit = 0;
    char inicial = iniciais[0];
    while (i < n) {
        if (iniciais[i] == inicial) {
            alit++;
            while (iniciais[i] == inicial && i < n) i++;
            inicial = iniciais[i];
            i++;
        } else {
            inicial = iniciais[i];
            i++;
        }
    }
    return alit;
}

int main() {
    char txt[NMAX_LINE];
    char iniciais[NMAX_CHW];
    int n, i, alit = 0;
    while (scanf("%[^\n]%*c", txt) != EOF) {
        extraiIniciais(txt, iniciais, &n);
        alit = contaAliteracao(iniciais, n);
        printf("%d\n", alit);
    }
    return 0;
}
