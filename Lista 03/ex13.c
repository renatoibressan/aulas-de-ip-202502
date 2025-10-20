#include <stdio.h>
#include <string.h>
// Prefixo de Uma String
void allocate(int n, char s[]) {
    int i;
    if (n >= strlen(s)) {
        printf("%s\n", s);
        return;
    }
    for (i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    int n;
    char s[505];
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        int m;
        scanf("%d %[^\n]%*c", &m, s);
        allocate(m, s);
    }
    return 0;

}
