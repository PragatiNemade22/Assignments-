#include <stdio.h>

void Pattern(int iRow, int iCol) {
    for (int i = 1; i <= iRow; i++) {
        for (int j = 1; j <= iCol; j++) {
            printf("%d ", 2 * (i - 1) + j);
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
//4 4
//2 4 6 8 10
// 1 3 5 7 9
//2 4 6 8 10
//1 3 5 7 9