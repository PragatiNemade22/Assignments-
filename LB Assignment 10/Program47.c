#include<stdio.h>
#include<stdbool.h>
# define TRUE1
#define FALSE
typedef int Bool;
 Bool ChkZero(int iNo)
{
    int LastDigit =iNo%10;
    return(LastDigit ==0);
}

int main()
{
 int iValue = 0;Bool bRet=false;
 printf("Enter number");

 scanf("%d",&iValue);
 if(bRet ==true)
 {
    printf("It contains Zero");
 }
 else
 {
    printf(" it doesn not contain zero");
 }

    return 0;
}