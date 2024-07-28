//return difference between  summitation of allits factors and non factors
//Non Factors
#include<stdio.h>
void FactDiff(int iNo)
{
    int sum =0;
    for (int i = 1; i <= iNo ; i++) {
        if (iNo % i == 0) {
           sum +=1;
        }
    }
    return sum;
}
int SumNonFactors(int iNo)
{
    int sum=0;

    for(int i =1;i<=iNo;i++)
    {
        if (iNo%i==0)
        {
            
            continue;
            
        }
        sum +=i;
        
    }
}


int main()
{

 int iValue=0;
 int iRet=0;

 printf("Enter number:");
 scanf("%d",&iValue);

int FactDiff=SumNonFactors(iValue);
int SumNonFactor=SumNonFactors(iValue);
int difference=FactDiff-SumNonFactor;
 printf("%d",iValue);

 printf("The diffrence between the  sum of Fcators and  non- factor is:");

    return 0;
}