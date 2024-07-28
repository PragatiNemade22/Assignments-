#include <stdio.h>

void Pattern(int iRow, int iCol) {
    int i, j, iNo= 1;
    for (i = 1; i <= iRow; i++) {
        for (j = 1; j <= iCol; j++) {
            if (i % 2 == 0) {
                printf("%d  ", iNo+ iCol - j);
            } else {
                printf("%d  ", iNo);
            }
            iNo++;
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
//4 4
// 1 2 3 4
//2 3 4 5
//3 4 5 6
// 4 5 6 7