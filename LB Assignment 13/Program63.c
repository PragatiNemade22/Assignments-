#include<stdio.h>

void Pattern(int iRow, int iCol )
{
    for(int i=1;i<=iRow;i++)
    {
      for (int j=iCol;j>=1;j--) 
      {
        printf("%d",j);
      }
       printf("\n");
      }
      
    }


int main()
{
    int iValue1 =0;  
    int iValue2=0;
    
    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}
//Enter the number of rows and column 
//3 5
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1


