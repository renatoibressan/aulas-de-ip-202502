#include <stdio.h>

int main() {
    int abc, ab, a, b, c;
    int m, d;
    int X;

    // printf("Entre com o valor de abc: ");
    scanf("%d", &abc);
    // verifica se abc está no range [100, 999];
    if (abc < 100 || abc > 999) {
        printf("Erro\n");
        return 0;
    }

    // remove o último algarismo;
    ab = abc / 10;
    // obtém o algarismo do meio;
    b = ab % 10;
    // obtém o primeiro algarismo;
    a = (ab - b)/10;
    // obtém o último algarismo;
    c = abc % 10;
    // obtém o dígito de controle;
    m = a + b * 3 + c * 5;
    // obtém o quarto algarismo;
    d = m % 7;
    // insere o quarto algarismo;
    X = abc * 10 + d;
    printf("O NOVO NUMERO E = %d\n", X);

    return 0;

}



