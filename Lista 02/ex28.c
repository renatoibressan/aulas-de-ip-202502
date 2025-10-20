#include <stdio.h>
// Ordem
int main() {
    int n1, n2, n3;
    char c1, c2, c3;
    int big, mid, small;
    scanf("%d%d%d", &n1, &n2, &n3);
    scanf("%*c%c%c%c", &c1, &c2, &c3);
    big = mid = small = n1;
    if (n2 > big) {
        big = n2;
    } 
    if (n3 > big) {
        big = n3;
    }
    if (n2 < small) {
        small = n2;
    }
    if (n3 < small) {
        small = n3;
    }
    if ((n2 != big) && (n2 != small)) {
        mid = n2;
    }
    if ((n3 != big) && (n3 != small)) {
        mid = n3;
    }
    switch (c1) {
    case 'A':
        printf("%d ", small);
        break;
    case 'B':
        printf("%d ", mid);
        break;
    case 'C':
        printf("%d ", big);
        break;
    }
    switch (c2) {
    case 'A':
        printf("%d ", small);
        break;
    case 'B':
        printf("%d ", mid);
        break;
    case 'C':
        printf("%d ", big);
        break;
    }
    switch (c3) {
    case 'A':
        printf("%d\n", small);
        break;
    case 'B':
        printf("%d\n", mid);
        break;
    case 'C':
        printf("%d\n", big);
        break;
    }
    return 0;
}
