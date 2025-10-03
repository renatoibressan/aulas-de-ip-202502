#include <stdio.h>
#include <math.h>

void scan(double u[]);
void print(double u[]);
double module(double *u);
double angle(double *u);
double escalar(double *u, double *v);
void proj(double *u, double *v, double *p);
int main() {
    double a[2], b[2], p[2];
    scan(a);
    scan(b);
    print(a);
    print(b);
    printf("Module 1 = %.2lf\n", module(a));
    printf("Module 2 = %.2lf\n", module(b));
    printf("Angle 1 = %.2lf\n", angle(a));
    printf("Angle 2 = %.2lf\n", angle(b));
    printf("<A.B> = %.2lf\n", escalar(a, b));
    proj(a, b, p);
    printf("Projection = ");
    print(p);
    return 0;
}
void scan(double u[]) {
    printf("Digite um par de coordenadas (x, y): ");
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
double escalar(double *u, double *v) {
    return u[0] * v[0] + u[1] * v[1];
}
void proj(double *u, double *v, double *p) {
    double k = escalar(u, v)/(module(v) * module(v));
    p[0] = k * v[0];
    p[1] = k * v[1];
}