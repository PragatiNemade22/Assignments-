#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0, i = 0;
    char ch = '#';

   
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("%c ", ch);
        printf("%d ", iCnt);
        printf("%c ", ch);

        if (iCnt < iNo) {
            printf("  ");  
        }
    }

    printf("\n");
}
int main()
{
int iValue=0;
  printf("Enter number of elements");
  scanf("%d",&iValue);

  Pattern(iValue);
    
    return 0;
}
//Enter the number
//4
//1#2#4#4#