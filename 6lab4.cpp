#include <stdio.h>

int main(void) {
    char ch;
    int columns, rows;
    printf("Enter character, number of columns and number of rows: ");
    scanf(" %c %d %d", &ch, &columns, &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}

