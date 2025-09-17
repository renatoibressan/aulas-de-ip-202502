#include <stdio.h>
 
int main() {
    double invest, taxa, taxa1=0.0, taxa2=0.0;
    double valor1=0.0, valor2=0.0;
    int anos;
    int mes;
    scanf("%lf %lf %d", &invest, &taxa, &anos);
    taxa/=100;
    int ano;
    for (ano=1; ano<=anos; ano++) {
        for (mes=1; mes<=12; mes++) {
            printf("Mes: %d/%d, ", mes, ano);
            if (ano==1) {
                taxa1=taxa/12.0;
                invest=invest+(invest*taxa1);
                valor1=invest;
                printf("Valor: %.1lf\n", valor1);
            } else if (ano>1) {
                taxa2=taxa1*12.0;
                invest=valor1+(invest*taxa2);
                valor2=invest;
                printf("Valor: %.1lf\n", valor2);
            }
        }
    }
    return 0;
}
