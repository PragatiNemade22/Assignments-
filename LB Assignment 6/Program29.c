#include <stdio.h>

void TableRev(int iNo) {
  int i;
  for (i = 1; i <= 10; i++) {
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
//2 4 6 8 10 12 14 16 18 20