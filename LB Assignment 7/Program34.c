#include <stdio.h>

int OddFactorial(int iNo)

{
int iOddFactorial = 1;
  for (int i = 0; i <= iNo; i++) {
    if (i % 2 ==! 0) {
      iOddFactorial *= i;
    }
  }
  return iOddFactorial;

}

int main()

{

  int iValue = 0, iRet = 0;

  printf("Enter number\n");

  scanf("%d",&iValue);

  iRet = OddFactorial(iValue);

  printf("Odd Factorial of number is %d", iRet);

  return 0;
}
//5
//15