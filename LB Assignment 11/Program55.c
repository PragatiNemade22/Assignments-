#include <stdio.h>
int CountDiff(int iNo)
{
 int evenSum =0;
 int oddSum;
 int Idigit = 0;

  while(iNo !=0)
  {
    Idigit=iNo %10;

    if (Idigit % 2 ==0)
    {
        evenSum+= Idigit;
    } else{
        oddSum+= Idigit;
    }
    iNo= iNo/10;
  }
  return evenSum-oddSum;

}
int  main()
{
 int iValue=0;
    int iRet =0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("%d",iRet);
 return 0;

    
  
}
//2395
//-15