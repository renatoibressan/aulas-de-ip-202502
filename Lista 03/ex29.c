#include <stdio.h>
#include <string.h>
// Intercala
int main() {
    int q1 = 1, q2 = 1;
    scanf("%d %d", &q1, &q2);
    int v1[50000], v2[50000];
    int i;
    for (i = 0; i < q1; i++) {
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < q2; i++) {
        scanf("%d", &v2[i]);
    }
    int vr[99999], trade = 0, j = 0;
    memcpy(vr, v1, sizeof(v1));
    memcpy(vr + q1, v2, sizeof(v2));
    for (i = 0; i < (q1 + q2 - 1); i++) {
        for (j = 0; j < (q1 + q2 - i - 1); j++) {
            if (vr[j] > vr[j + 1]) {
                trade = vr[j];
                vr[j] = vr[j + 1];
                vr[j + 1] = trade;
            }
        }
    }
    for (i = 0; i < (q1 + q2); i++) {
        printf("%d\n", vr[i]);
    }
    return 0;
}
