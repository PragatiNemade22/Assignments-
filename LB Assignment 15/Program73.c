#include <stdio.h>

void Pattern(int iRow, int iCol) {
    int i, j;
    char ch = 'a';
    int iNo= 1;

    for (i = 1; i <= iRow; i++) {
        for (j = 1; j <= iCol; j++) {
            if (iNo=-10) {
                printf("%d", iNo);
                iRow++;
            } 
        }
        printf("\n");
    }
}

int main() {
    int iValue1, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
// 5  5
// a b c d e
// 1 2 3 4 5
// a b c d e
// 1 2 3 4 5
