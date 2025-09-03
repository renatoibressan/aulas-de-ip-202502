#include <stdio.h>

int main() {
    int abc, ab, a, b, c;
    int cba;

    // printf("Entre com o valor de abc: ");
    scanf("%d", &abc);
    // verifica se abc não é múltiplo de 10 e se está no range [100, 999];
    if (abc % 10 == 0 || abc < 100 || abc > 999) {
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
    // obtém o algarismo invertido;
    cba = c * 100 + b * 10 + a;
    printf("%d", cba);

    return 0;

}



