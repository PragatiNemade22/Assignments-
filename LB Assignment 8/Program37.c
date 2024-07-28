#include <stdio.h>



double RectArea(float fWidth,float fHeight ) {
  double   dArea = fWidth * fHeight;
  return dArea;
}

int main() {
  float fValue1 = 0.0;
   float fValue2 = 0.0;

  double dRet = 0.0;


  printf("Enter Width\n");
  scanf("%f", &fValue1);

printf("Enter Width\n");
  scanf("%f", &fValue2);

dRet=RectArea(fValue1,fValue2);

  printf("Area of circle is %lf\n", dRet);

  return 0;
}
//5.3 9.78
//88.2026
//o(n)