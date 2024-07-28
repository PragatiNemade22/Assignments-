#include <stdio.h>

void pattern(int iRow, int iCol) {
  char ch = 'A';
  for (int i = 0; i < iRow; i++) {
    for (int j = 0; j < iCol; j++) {
      printf("%c ", ch);
     
      ch ++;
    }
    printf("\n");
  }
}

int main() {
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns\n");
  scanf("%d %d", &iValue1, &iValue2);

  pattern(iValue1, iValue2);

  return 0;
}
 // 3 5
 // ABCD
 //FGHIJ
 //KLMNO