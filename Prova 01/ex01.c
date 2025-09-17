#include <stdio.h>
 
int main() {
    int n1, n2, n3, n4, n5;
    int menor=0, maior=0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if (n1<n2 && n2<n3 && n3<n4 && n4<n5) {
        printf("MENOR: %d, MAIOR: %d\n", n1, n5);
        printf("ORDENADO CRESCENTE\n");
    } else if (n1>n2 && n2>n3 && n3>n4 && n4>n5) {
        printf("MENOR: %d, MAIOR: %d\n", n5, n1);
        printf("ORDENADO DECRESCENTE\n");
    } else {
        if (n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5) {
            menor=n1;
            if (n2>=n3 && n2>=n4 && n2>=n5) {
                maior=n2;
            } else if (n3>=n2 && n3>=n4 && n3>=n5) {
                maior=n3;
            } else if (n4>=n2 && n4>=n3 && n4>=n5) {
                maior=n4;
            } else if (n5>=n2 && n5>=n3 && n5>=n4) {
                maior=n5;
            }
        } else if (n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5) {
            menor=n2;
            if (n1>=n3 && n1>=n4 && n1>=n5) {
                maior=n1;
            } else if (n3>=n1 && n3>=n4 && n3>=n5) {
                maior=n3;
            } else if (n4>=n1 && n4>=n3 && n4>=n5) {
                maior=n4;
            } else if (n5>=n1 && n5>=n3 && n5>=n4) {
                maior=n5;
            }
        } else if (n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5) {
            menor=n3;
            if (n1>=n2 && n1>=n4 && n1>=n5) {
                maior=n1;
            } else if (n2>=n1 && n2>=n4 && n2>=n5) {
                maior=n2;
            } else if (n4>=n1 && n4>=n2 && n4>=n5) {
                maior=n4;
            } else if (n5>=n1 && n5>=n2 && n5>=n4) {
                maior=n5;
            }
        } else if (n4<=n1 && n4<=n2 && n4<=n3 && n4<=n5) {
            menor=n4;
            if (n1>=n2 && n1>=n3 && n1>=n5) {
                maior=n1;
            } else if (n2>=n1 && n2>=n3 && n2>=n5) {
                maior=n2;
            } else if (n3>=n1 && n3>=n2 && n3>=n5) {
                maior=n3;
            } else if (n5>=n1 && n5>=n2 && n5>=n3) {
                maior=n5;
            }
        } else if (n5<=n1 && n5<=n2 && n5<=n3 && n5<=n4) {
            menor=n5;
            if (n1>=n2 && n1>=n3 && n1>=n4) {
                maior=n1;
            } else if (n2>=n1 && n2>=n3 && n2>=n4) {
                maior=n2;
            } else if (n3>=n1 && n3>=n2 && n3>=n4) {
                maior=n3;
            } else if (n4>=n1 && n4>=n2 && n4>=n3) {
                maior=n4;
            }
        }
        printf("MENOR: %d, MAIOR: %d\n", menor, maior);
        printf("DESORDENADO\n");
    }
    return 0;
}
