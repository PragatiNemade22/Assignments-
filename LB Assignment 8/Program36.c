#include <stdio.h>

#define PI 3.14159

double CircleArea(float fRadius) {
  double dArea = PI * fRadius * fRadius;
  return dArea;
}

int main() {
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter radius\n");
  scanf("%f", &fValue);

  dRet = CircleArea(fValue);

  printf("Area of circle is %lf\n", dRet);

  return 0;
}
//5.3
//88.2026
//o(n)