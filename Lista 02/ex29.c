#include <stdio.h>
// Ordena 4 números
int main() {
    float a, b, c, d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    if (a <= b && a <= c && b <= c && c <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, b, c, d);
    } else if (a <= b && a <= c && b >= c && b <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, c, b, d);
    } else if (a >= b && a <= c && b <= c && c <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, a, c, d);
    } else if (a <= b && a >= c && b >= c && b <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, a, b, d);
    } else if (a >= b && a >= c && b <= c && a <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, c, a, d);
    } else if (a >= b && a >= c && b >= c && a <= d) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, b, a, d);
    } else if (a <= b && a <= c && b <= c && d <= c && d >= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, b, d, c);
    } else if (a <= b && a <= c && b >= c && d <= b && d >= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, c, d, b);
    } else if (a >= b && a <= c && b <= c && d <= c && d >= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, a, d, c);
    } else if (a <= b && a >= c && b >= c && d <= b && d >= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, a, d, b);
    } else if (a >= b && a >= c && b <= c && d <= a && d >= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, c, d, a);
    } else if (a >= b && a >= c && b >= c && d <= a && d >= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, b, d, a);
    } else if (a <= b && a <= c && b <= c && d <= b && d >= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, d, b, c);
    } else if (a <= b && a <= c && b >= c && d <= c && d >= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", a, d, c, b);
    } else if (a >= b && a <= c && b <= c && d <= a && d >= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, d, a, c);
    } else if (a <= b && a >= c && b >= c && d <= a && d >= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, d, a, b);
    } else if (a >= b && a >= c && b <= c && d <= c && d >= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", b, d, c, a);
    } else if (a >= b && a >= c && b >= c && d <= b && d >= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", c, d, b, a);
    } else if (a <= b && a <= c && b <= c && d <= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, a, b, c);
    } else if (a <= b && a <= c && b >= c && d <= a) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, a, c, b);
    } else if (a >= b && a <= c && b <= c && d <= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, b, a, c);
    } else if (a <= b && a >= c && b >= c && d <= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, c, a, b);
    } else if (a >= b && a >= c && b <= c && d <= b) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, b, c, a);
    } else if (a >= b && a >= c && b >= c && d <= c) {
        printf("%.2f, %.2f, %.2f, %.2f\n", d, c, b, a);
    }
    return 0;
}
