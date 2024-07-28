#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++) {
        
        for (int j = 1; j <= iRow - i; j++) {
            printf("*");
        }

        
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf(" "); 
            } else if (i == iRow) {
                printf("@"); 
            } else {
                printf("#"); 
            }
        }
        printf("\n"); 
    }

}

int main() {
    int iValue1, iValue2;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
//*
//**#@
//*#@@