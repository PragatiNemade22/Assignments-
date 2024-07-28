#include<stdio.h>
void Pattern (int iRow , int iCol)
{
char ch ='A';
for(int i=0; i<iRow;i++)
{
    for(int j=0;j<iCol;j++)
    {
        printf("%c",ch);
        ch++;
    }
    printf("\n");
}
}
int main()

{
 int iValue1 =0;
 int iVlaue2 =0;
 printf("Enter number of rows and columns");
 scanf("%d %d ",&iValue1,&iValue1);
 Pattern(iValue1,iVlaue2);
    return 0;
}
//4 4
//A B C D
 //A B C D
 //A B C D
 //A B C D