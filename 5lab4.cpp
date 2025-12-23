#include <stdio.h>

int main(void) {
    char ch;
    int count;
    printf("Enter character and number of times: ");
    scanf(" %c %d", &ch, &count);
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
