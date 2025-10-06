#include <stdio.h>
#define N 101

int freq[N];
int menor(int x, int y) {
    if (x < y) return x;
    else if (x > y) return y;
    else return x;
}
int main() {
    int k = 1;
    int a;
    int maior = 0;
    scanf("%d", &k);
    int i;
    for (i = 0; i < k; i++) {
        scanf("%d", &a);
        freq[a]++;
        if (freq[a] > freq[maior]) maior = a;
        if (freq[a] == freq[maior]) maior = menor(a, maior);
    }
    printf("%d\n%d\n", maior, freq[maior]);
    return 0;
}