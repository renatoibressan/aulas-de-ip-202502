#include <stdio.h>

int main() {
    unsigned long int code;
    float compra, compratotal = 0.0;
    float venda, vendatotal = 0.0;
    float lucrototal = 0.0, valorml = -1;
    int menor = 0, meio = 0, maior = 0, valormv = -1;
    int num, codel = 0, codev = 0;
    while (scanf ("%lu %f %f %d", &code, &compra, &venda, &num) != EOF) {
        float lucro = venda - compra;
        float percent = (lucro / compra) * 100;
        compratotal += compra *num;
        vendatotal += venda * num;
        if (percent < 10) {
            menor++;
        } else if (percent >= 10 && percent <= 20) {
            meio++;
        } else {
            maior++;
        }
        float ltm = lucro * num;
        if (ltm > valorml) {
            valorml = ltm;
            codel = code;
        }
        if (num > valormv) {
            valormv = num;
            codev = code;
        }
    }
    lucrototal = ((vendatotal - compratotal) / compratotal) * 100.0;
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", menor);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", meio);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", maior);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codel);
    printf("Codigo da mercadoria mais vendida: %lu\n", codev);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", compratotal, vendatotal, lucrototal);
    return 0;
}