int FactorialDiff(int iNo) {
  int iEvenFactorial = 1, iOddFactorial = 1, i = 1;

  while (i <= iNo) {
    if (i % 2 == 0) {
      iEvenFactorial *= i;
    }
    i++;
  }

 
  i = 1;
  while (i <= iNo) {
    if (i % 2 != 0) {
      iOddFactorial *= i;
    }
    i++;
  }

 
  return iEvenFactorial - iOddFactorial;
}

int main() {
  int iValue = 0, iRet = 0;

  printf("Enter number\n");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);

  printf("Factorial difference is %d", iRet);

  return 0;
}
//10
//2895
