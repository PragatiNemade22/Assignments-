#include <stdio.h>

void pattern(int iRow, int iCol) {
    int iNo=0;
  for (int i = 0; i < iRow; i++) {
    for (int j = 0; j < iCol; j++) {
      printf("%d",iNo);
      iNo++;
     
      
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
// 3 4
//1 2 3 4
//5 6 7  8
//9 10 12 13
