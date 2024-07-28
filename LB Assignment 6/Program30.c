#include <stdio.h>

void TableRev(int iNo) {
  int i;
  for (i = 10; i >= 1; i--) {
    printf("%d ", i * iNo);
  }
  printf("\n");
}

int main() {
  int iValue = 0;

  printf("Enter number\n");
  scanf("%d", &iValue);

  TableRev(iValue);

  return 0;
}
//2
//20 18 16 12 10 8 6 4 2 