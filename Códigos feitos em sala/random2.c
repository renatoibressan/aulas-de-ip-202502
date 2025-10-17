#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main() {
    int i, v[N], w[N], score = 0;
    srand(time(0));
    for (i = 0; i < N; i++) v[i] = rand() % 11;
    for (i = 0; i < N; i++) {
        printf("Choose a number from 0 to 10: ");
        scanf("%d", &w[i]);
        if (w[i] < 0 || w[i] > 10) {
            printf("%d is an invalid number!\n", w[i]);
            return 0;
        }
    }
    for (i = 0; i < N; i++) {
        if (w[i] != v[i]) printf("Wrong number!\n");
        else {
            printf("%d is a correct number!\n", w[i]);
            score++;
        }
    }
    printf("Final score: %d/%d\n", score, N);
    if (score == N) printf("Perfect score! Congratulations!\n");
    else if (score < N && score >= 8) printf("Very good result!\n");
    else if (score < 8 && score >= 4) printf("Nice try, don't give up!");
    else if (score < 4 && score >= 0) printf("Too bad, better luck next time!\n");
    return 0;
}