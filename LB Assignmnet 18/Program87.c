#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    
int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        
        for (int j = 1; j <=  2 * i - 1; j++) {
            printf("   ");
        }

        
        if (i != 1) {  
            for (int j = i; j >= 1; j--) {
                if (j != 1) {  
                    printf("%d ", j);
                }
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
//*  * * * * *
//*          * *
//*      *     *
//*  *         *
//* * * * * *