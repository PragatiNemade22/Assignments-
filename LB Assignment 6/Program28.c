
#include<stdio.h>

void CountFactors(int iNo)
{
  int iCnt = 0;
  int iCount =0;

  
     //1         //2     //3
  for(iCnt = 1;iCnt<iNo;iCnt++)
  {
   

    if((iNo % iCnt)==0)
    {
       iCnt++;
    }
      

  }
  return iCount;
}
int main()
{ 
    int ivalue= 0,iRet = 0;

         printf("Enter number:\n");
          scanf("%d",&ivalue);

iRet = SumFactors(ivalue);
printf("Summation of Factors  %d\n",iRet);

Display(ivalue);

    return 0;
}
//Enter number:
//12
// number of factor arr :5
//15
//number of factor are :3

