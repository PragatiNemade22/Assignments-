//return count  between 3 and 7
#include <stdio.h>
 int CountRange(int iNo)
 {
    int iCnt =0;
    int IDigit =0;
    while (iNo !=0)
    {
        IDigit=iNo%10;

        if(IDigit >= 3 && IDigit<=7)
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
    iRet = CountRange(iValue);
    printf("%d",iRet);
 return 0;

}
//2395
//1