#include <stdio.h>

int main(void) {
    int score;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
    while (1) {
        scanf("%d", &score);
        if (score == -1) {
            break; // ?????????????????????? -1
        }
        if (score >= 85) {
            printf("%d(A)\n", score);
            gradeA++;
        } else if (score >= 75) {
            printf("%d(B)\n", score);
            gradeB++;
        } else if (score >= 68) {
            printf("%d(C)\n", score);
            gradeC++;
        } else if (score >= 55) {
            printf("%d(D)\n", score);
            gradeD++;
        } else {
            printf("%d(F)\n", score);
            gradeF++;
        }
    }
    printf("A(%d)\n", gradeA);
    printf("B(%d)\n", gradeB);
    printf("C(%d)\n", gradeC);
    printf("D(%d)\n", gradeD);
    printf("F(%d)\n", gradeF);

    return 0;
}

