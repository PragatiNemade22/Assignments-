#include <stdio.h>
 int CountEven(int iNo)
 {
    int iCnt =0;
    int IDigit =0;
    while (iNo !=0)
    {
        IDigit=iNo%10;

        if(IDigit%2 ==0)
        {

            iCnt++;
        }
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
    iRet = CountEven(iValue);
    printf("%d",iRet);
 return 0;

}