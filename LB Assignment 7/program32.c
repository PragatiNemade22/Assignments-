#include<stdio.h>
int DollarToINR(int iNo)
{
 int iRupees =iNo*70;
 return iRupees;
}
int  main()
{

 int iVlaue =0 ;
 int iRet=0;
 pirntf("Enter  number of USD");
 scanf("%d",&iVlaue);
 iRet=DollarToINR(iVlaue);
 printf("Value in INR is %d",iRet);
    return 0;
}