#include <stdio.h>
// Elementos Únicos
int main() {
    int v[1001];
    int k;
    scanf("%d", &k);
    int i, j = 0;
    for (i = 0; i < k; i++) {
        int repeat = 0;
        scanf("%d", &v[i]);
        for (j = 0; j < i; j++) {
            if (v[i] == v[j]) {
                repeat = 1;
                break;
            }
        }
        if (!repeat) printf("%d\n", v[i]);
    } 
    return 0;
}
