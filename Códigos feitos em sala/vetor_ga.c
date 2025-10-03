#include <stdio.h>
#include <math.h>

void scan(double u[]);
void print(double u[]);
double module(double *u);
double angle(double *u);
int main() {
    double a[2];
    double m, arc;
    printf("Digite um par de coordenadas (x, y): ");
    scan(a);
    print(a);
    m = module(a);
    printf("Module = %.2lf\n", m);
    arc = angle(a);
    printf("Angle = %.2lf\n", arc);
    return 0;
}
void scan(double u[]) {
    scanf("%lf %lf", &u[0], &u[1]);
}
void print(double u[]) {
    printf("(%.1lf, %.1lf)\n", u[0], u[1]);
}
double module(double *u) {
    return sqrt(u[0] * u[0] + u[1] * u[1]);
}
double angle(double *u) {
    return atan(u[1] / u[0]) * (180 / M_PI);
}