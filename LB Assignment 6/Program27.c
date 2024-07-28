#include <stdio.h>

void Display(int iNo) {
  switch (iNo) {
    case 0:
      printf("Zero\n");
      break;
    case 1:
      printf("One\n");
      break;

    default:
      printf("Invalid Number\n");
  }
}

int main() {
  int iValue = 0;

  printf("Enter number\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}