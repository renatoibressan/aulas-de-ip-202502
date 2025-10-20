#include <stdio.h>
// José
int main() {
    int q, a1, b1, a2, b2;
    int i;
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d", &a1, &b1);
        a2 = (a1 % 10) * 100 + ((a1 / 10) % 10) * 10 + ((a1 / 10) - ((a1 / 10) % 10)) / 10;
        b2 = (b1 % 10) * 100 + ((b1 / 10) % 10) * 10 + ((b1 / 10) - ((b1 / 10) % 10)) / 10;
        if (a2 > b2) {
            printf("%d\n", a2);
        } else if (b2 > a2) {
            printf("%d\n", b2);
        } else {
            return 0;
        }
    }
    return 0;
}
