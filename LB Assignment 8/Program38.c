#include <stdio.h>
int KMtoMeter(int iNo) {
  return iNo * 1000;
}

int main() {
  int iValue = 0, iRet = 0;

  printf("Enter distance in kilometers: ");
  scanf("%d", &iValue);

  iRet = KMtoMeter(iValue);

  printf("Distance in meters: %d\n", iRet);

  return 0;
}
//O(N)
//5
//5000