#include <stdio.h>

void pattern(int iRow, int iCol) {
 int i, j, iNo= 1;

    for (i = 1; i <= iRow; i++) {
        for (j = 1; j <= iCol; j++) {
            if (j <= i) {
                printf("%d ", iNo);
                iNo++;
            } else {
                printf("  ");  
            }
        }
        printf("\n");
    }
}

int main() {
  int iValue1 = 0, iValue2 = 0; 
  int iNo=0;

  printf("Enter number of rows and columns\n");
  scanf("%d %d ", &iValue1, &iValue2);

  pattern(iValue1, iValue2);

  return 0;
}
//4 4 
//1 2 3 4
//5 6 7 8
//9 1 2 3
// 4 5 6 7