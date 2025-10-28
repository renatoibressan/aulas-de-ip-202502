#include <stdio.h>
// Fibonacci
int fibonacci(int t1, int t2, int n) {
    int auxiliar, i;
    for (i = 3; i <= n; i++) {
        auxiliar = t1 + t2;
        t1 = t2;
        t2 = auxiliar;
    }
    return auxiliar;
}

int main() {
    int t1, t2, n;
    scanf("%d %d %d", &t1, &t2, &n);
    printf("%d\n", fibonacci(t1, t2, n));
    return 0;
}
