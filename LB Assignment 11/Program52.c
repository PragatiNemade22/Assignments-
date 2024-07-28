//return count of odd number
#include <stdio.h>
 int CountOdd(int iNo)
 {
    int iCnt =0;
    int IDigit =0;
    while (iNo !=0)
    {
        IDigit=iNo%10;

        if(IDigit %!2  ==1)
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
    iRet = CountOdd(iValue);
    printf("%d",iRet);
 return 0;

}
//2395
//3