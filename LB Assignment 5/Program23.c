#include<stdio.h>
void Display(int iNo)
{
for(int i=-iNo;i<=iNo;i++)
{
    printf("%d",i);
}printf("\n");

}
int main()
{
int iVlaue=0;
printf("Enter number");
scanf("%d",&iVlaue);
Display(iVlaue);
    return 0;
}