#include <stdio.h>

int main(void) {
    int score;
    for (int i = 0; i < 11; i++) {
        scanf("%d", &score);

        if (score >= 85) {
            printf("%d(A)\n", score);
        } else if (score >= 75) {
            printf("%d(B)\n", score);
        } else if (score >= 68) {
            printf("%d(C)\n", score);
        } else if (score >= 55) {
            printf("%d(D)\n", score);
        } else {
            printf("%d(F)\n", score);
        }
    }

    return 0;
}

