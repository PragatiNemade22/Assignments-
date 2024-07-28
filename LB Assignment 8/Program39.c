#include<stdio.h>
double FhtoCs(float FTemp)
{
   
     return (FTemp -32)*(5.0/9.0);
}
int main()
{
float fValue =0.0;
double bRet =0.0;

printf("Enter temperature in Fahrenheit");
scanf("%d",&fValue);

bRet=FhtoCs(fValue);

printf("Temperature is celsius :%.21f\n",bRet);


    return 0;
}
//0(n)
//10
//-12.2222 (10-32)*(5/9)