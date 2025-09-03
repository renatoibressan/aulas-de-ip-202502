#include <stdio.h>

int main() {
    int pop1, pop2;
    int x = 0;
    int npop1, npop2;
    scanf("%d", &pop1);
    scanf("%d", &pop2);
    if (pop1 >= pop2) {
        return 0;
    } else {
        while (pop1 < pop2) {
            x++;
            pop1 = pop1 * 1.03;
            pop2 = pop2 * 1.015;
            npop1 = pop1 * (1.03 * x);
            npop2 = pop2 * (1.015 * x);
        }
        printf("ANOS = %d\n", x);
    }
    return 0;
}