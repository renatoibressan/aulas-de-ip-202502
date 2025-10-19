#include <stdio.h>

int main() {
    int ta, tb;
    while (ta < 1 || ta > 100) scanf("%d", &ta);
    while (tb < 1 || tb > 100) scanf("%d", &tb);
    int va[110], vb[110];
    int i;
    for (i = 0; i< ta; i++) {
        int x;
        scanf("%d", &x);
        int j = 0, repeat = 0;
        for (j = i - 1; j >= 0; j--) {
            if (va[j] == x) {
                repeat = 1;
                break;
            }
        }
        if (repeat == 0) {
            va[i] = x;
        } else i--;
    }
    for (i = 0; i< tb; i++) {
        int x;
        scanf("%d", &x);
        int j = 0, repeat = 0;
        for (j = i - 1; j >= 0; j--) {
            if (vb[j] == x) {
                repeat = 1;
                break;
            }
        }
        if (repeat == 0) {
            vb[i] = x;
        } else i--;
    }
    printf("(");
    for (i = 0; i < ta; i++) {
        if (i == 0) printf("%d", va[0]);
        else printf(",%d", va[i]);
    }
    printf(")\n");
    printf("(");
    for (i = 0; i < tb; i++) {
        if (i == 0) printf("%d", vb[0]);
        else printf(",%d", vb[i]);
    }
    printf(")\n");
    printf("(");
    int pelomenosum = 0;
    for (i = 0; i < ta; i++) {
        int j, checkup = 0;
        for (j = 0; j < tb; j++) {
            if (va[i] == vb[j]) {
                checkup = 1;
                break;
            }
        }
        if (checkup == 0) {
            if (pelomenosum == 0) printf("%d", va[i]);
            else printf(",%d", va[i]);
            pelomenosum++;
        }
    }
    printf(")\n");
    printf("(");
    for (i = 0; i < ta; i++) {
        int j;
        for (j = 0; j < tb; j++) {
            if (i == ta - 1 && j == tb - 1) printf("(%dx%d)", va[i], vb[j]);
            else printf("(%dx%d),", va[i], vb[j]);
        }
    }
    printf(")\n");
    return 0;
}