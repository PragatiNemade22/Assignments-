#include <stdio.h>

void pattern(int iRow, int iCol ) {
  for (int i = 0; i < iRow; i++) {
    for (int j = 0; j < iCol; j++) {
      printf("%d",iRow-1);
     
      
    }
    printf("\n");
  }
}

int main() {
  int iValue1 = 0, iValue2 = 0; 


  printf("Enter number of rows and columns\n");
  scanf("%d %d ", &iValue1, &iValue2);

  pattern(iValue1, iValue2);

  return 0;
}
//4 3
// 4 4 4 4
//3 3 3 3 
//2 2 2 2
//1  1 1 1
