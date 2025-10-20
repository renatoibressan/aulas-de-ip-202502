#include <stdio.h>
// Transcrição de datas
int main() {
    int data;
    int dia, mes, ano;
    scanf("%d", &data);
    dia = data / 1000000;
    if (dia < 1 || dia > 31) {
        printf("Data invalida!\n");
        return 0;
    }
    mes = (data / 10000) - (100 * dia);
    if (mes < 1 || mes > 12) {
        printf("Data invalida!\n");
        return 0;
    }
    ano = data - (1000000 * dia) - (10000 * mes);
    switch(mes) {
        case 1:
            if (dia <= 31) {
                printf("%d de janeiro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 2:
            if (dia <= 28) {
                printf("%d de fevereiro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 3:
            if (dia <= 31) {
                printf("%d de marco de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 4:
            if (dia <= 30) {
                printf("%d de abril de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 5:
            if (dia <= 31) {
                printf("%d de maio de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 6:
            if (dia <= 30) {
                printf("%d de junho de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 7:
            if (dia <= 31) {
                printf("%d de julho de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 8:
            if (dia <= 31) {
                printf("%d de agosto de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 9:
            if (dia <= 30) {
                printf("%d de setembro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 10:
            if (dia <= 31) {
                printf("%d de outubro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 11:
            if (dia <= 30) {
                printf("%d de novembro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
        case 12:
            if (dia <= 31) {
                printf("%d de dezembro de %d\n", dia, ano);
            } else {
                printf("Data invalida!\n");
                break;
            }
            break;
    }
    return 0;
}
