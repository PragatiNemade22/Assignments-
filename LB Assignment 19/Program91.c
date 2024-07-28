#include<stdio.h>
int CountEven(int Arr[],int iLength)
{
{

   int iFrequency =0;
   int iLength =0;
     int i =0;
for(i=0; i< iLength;i++)
{

    if((Arr[i]%2)==0)
    {
        int iSum =iSum +Arr[i];
    }
    
}
return  iFrequency;
}


}
int main()
{

    int iSize =0, iRet =0,iCnt=0;
    int *p=NULL;
      int i =0;
         int iLength =0;

    printf("Enter number of elemnets ");
    scanf("%d",&iSize);
    p =(int *)malloc(iSize* sizeof(int));

    if(p ==NULL)
    {
        printf("enter %d elements ",iLength);

        for(iCnt =0; iCnt<iLength ;iCnt++)
        {

            printf("Enter elements :%d",iCnt+1);
            scanf("%d",&p[iCnt]);
        }

        iRet =CountEven(p,iSize);
        printf("Result is %d",iRet);
        free(p);

        return 0;
    }
}
//6
//85
//66
//3
//8
//88

//count = 3