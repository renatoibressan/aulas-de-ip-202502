#include <stdio.h>
#include <math.h>
// Próxima potência
int next_power(int n, int p) {
    int i = 0;
    while (pow(i, p) < n) i++;
    i = i - 1;
    int x = pow(i, p);
    int j = i + 1;
    int y = pow(j, p);
    if (n - x < y - n) printf("%d -> %d^%d = %d\n", n, i, p, x);
    else printf("%d -> %d^%d = %d\n", n, j, p, y);
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    next_power(n, p);
    return 0;
}
