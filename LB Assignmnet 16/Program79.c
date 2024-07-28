#include <stdio.h>

void Pattern(int iRow, int iCol) {
    for (int i = 1; i <= iRow; i++) {
        for (int j = 1; j <= iCol; j++) {
            if (i == iRow && j == iCol) {
                printf("*");
            } else if (i % 2 == 0) {
                printf("@");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main() {
    int iRow, iCol;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    Pattern(iRow, iCol);

    return 0;
}