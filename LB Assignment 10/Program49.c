#include<stdio.h>
int CountTwo(int iNo)
{
 int count =0;
 while(iNo !=0)
 {
    int lastdigit =iNo%10;
    if(lastdigit ==4)
    {
        count++;
    }
    iNo/=10;
 }
 return count;

}

int main()
{
 int iValue=0;
 int bRet=0;
 printf("Enter number");
 scanf("%d",&iValue);
 bRet=CountTwo(iValue);
  printf("%d",bRet);

    return 0 ;
}
//Frequency 
///2395
//0