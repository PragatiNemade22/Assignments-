//Multiplication of factors
#include<stdio.h>
int MultiFact( int iNo)
{
     int multiplication = 1;
     for (int i = 1; i <= iNo; i++) 
     {
         
          if (iNo % i == 0)
          {
                multiplication *= i;
          }  
     }
      return multiplication;
}


int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter number");
 scanf("%d",&iValue);
 iRet =MultiFact(iValue);
 printf("%d",iRet);

    return 0;
}