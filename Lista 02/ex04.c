#include <stdio.h>

int main() {
    int n;
    double f, c;
    scanf("%d", &n);
    while (n >= 1) {
        n--;
        scanf("%lf", &f);
        c = (5 * (f - 32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
    }
    return 0;
}