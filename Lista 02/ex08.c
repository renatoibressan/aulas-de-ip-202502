#include <stdio.h>

int main() {
    int matricula, freq;
    double np1, np2, np3, np4, np5, np6, np7, np8, nl1, nl2, nl3, nl4, nl5, nt;
    while (scanf("%d", &matricula) == 1 && matricula != -1) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &np1, &np2, &np3, &np4, &np5, &np6, &np7, &np8);
        scanf("%lf %lf %lf %lf %lf", &nl1, &nl2, &nl3, &nl4, &nl5);
        scanf("%lf", &nt);
        scanf("%d", &freq);
        double mp = (np1 + np2 + np3 + np4 + np5 + np6 + np7 + np8) / 8;
        double ml = (nl1 + nl2 + nl3 + nl4 + nl5) / 5;
        double nf = 0.7 * mp + 0.15 * ml + 0.15 * nt;
        if (nf >= 6.0 && freq >= 96) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nf);
        } else if (nf >= 6.0 && freq < 96) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nf);
        } else if (nf < 6.0 && freq >= 96) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nf);
        } else {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nf);
        }
    }
    return 0;
}