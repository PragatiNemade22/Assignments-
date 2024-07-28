#include <stdio.h>
int MultiDigits(int iNo)
{
    int iCnt =1;
    int IDigit =0;
    while (iNo !=0)
    {
        IDigit=iNo%10;

       
        iCnt *=IDigit;

        iNo=iNo/10;
    }
     return iCnt;
    
}
 int main()
 {


 
    int iValue=0;
    int iRet =0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet = MultiDigits(iValue);
    printf("%d",iRet);
 return 0;

    
 }