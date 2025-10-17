#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NL 250
#define NC 500
#define MAX 255

void set_bg(int M[][NC], int nl, int nc, int color);

void set_noise(int M[][NC], int nl, int nc);

void print_img(int M[][NC], int nl, int nc);

int main() {
    int I[NL][NC];
    set_noise(I, NL, NC);
    set_bg(I, NL, NC, MAX);
    print_img(I, NL, NC);
    return 0;
}

void set_bg(int M[][NC], int nl, int nc, int color) {
    int l, c;
    for (l = 0; l < nl; l++) {
        for (c = 0; c < nc; c++) {
            M[l][c] = color;
        }
    }
}

void set_noise(int M[][NC], int nl, int nc) {
    int l, c;
    srand(time(0));
    for (l = 0; l < nl; l++) {
        for (c = 0; c < nc; c++) {
            M[l][c] = rand() % (MAX + 1);
        }
    }
}

void print_img(int M[][NC], int nl, int nc) {
    int l, c;
    printf("P2\n"); // código PGM
    printf("%d %d\n", nc, nl); // nº de colunas e de linhas
    printf("%d\n", 11); // brilho máximo
    for (l = 0; l < nl; l++) {
        for (c = 0; c < nc; c++) {
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }
}