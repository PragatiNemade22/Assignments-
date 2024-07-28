#include<stdio.h>
void Pattern(int iNo)
{

for( int i=1; i<=iNo;i++)
{
    printf("%d",2*i);
}
}
int main()
{

  int iValue=0;
  printf("Enter number of elements");
  scanf("%d",&iValue);

  Pattern(iValue);
    return 0;
}

//enter the number 
//8
//2 4 6 8 12 14 16