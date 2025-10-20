#include <stdio.h>
// Um_Dois_Três
int main() {
    int k;
    char num[6];
    int count1;
    int count2;
    int count3;
    scanf("%d", &k);
    while (k--) {
        count1 = 0;
        count2 = 0;
        count3 = 0;
        scanf(" %s", num);
        if (num[0] == 'o') {
            count1++;
        } else if (num[0] == 't') {
            count2++;
            count3++;
        }
        if (num[1] == 'n') {
            count1++;
        } else if (num[1] == 'w') {
            count2++;
        } else if (num[1] == 'h') {
            count3++;
        }
        if (num[2] == 'e') {
            count1++;
        } else if (num[2] == 'o') {
            count2++;
        } else if (num[2] == 'r') {
            count3++;
        }
        if (num[3] == 'e') count3++;
        if (num[4] == 'e') count3++;
        if (count1 >= 2) printf("1\n");
        if (count2 >= 2) printf("2\n");
        if (count3 >= 4) printf("3\n");
    }
    return 0;
}
