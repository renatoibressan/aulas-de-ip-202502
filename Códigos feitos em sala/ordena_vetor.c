#include <stdio.h>
#define N 1000

void selectionSort(int A[], int n) {
    int i, im, k, tmp;
    for (i = 0; i < n - 1; i++) {
        im = i;
        for (k = i + 1; k < n; k++) {
            if (A[k] < A[im]) im = k;
        }
        tmp = A[i];
        A[i] = A[im];
        A[im] = tmp;
    }
}

int main() {
    int n, v[N];
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        printf("Insira o elemento %d do vetor para formar o conjunto: ", i);
        scanf("%d", &v[i]);
    } 
    selectionSort(v, n);
    printf("O conjunto ordenado obtido por %d elementos do vetor: ", n);
    for (i = 0; i < n; i++) {
        if (n == 1) printf("{%d}", v[0]);
        else if (i == 0) printf("{%d, ", v[0]);
        else if (i > 0 && i < n - 1) printf("%d, ", v[i]);
        else printf("%d}", v[n - 1]);
    }
    printf("\n");
    return 0;
}