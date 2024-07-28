#include <stdio.h>

int EvenFactorial(int iNo)

{
int iEvenFactorial = 1;
  for (int i = 2; i <= iNo; i++) {
    if (i % 2 == 0) {
      iEvenFactorial *= i;
    }
  }
  return iEvenFactorial;

}

int main()

{

  int iValue = 0, iRet = 0;

  printf("Enter number\n");

  scanf("%d",&iValue);

  iRet = EvenFactorial(iValue);

  printf("Even Factorial of number is %d", iRet);

  return 0;
}
