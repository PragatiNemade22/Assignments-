//print all odd no up tu n
#include<stdio.h>
void OddDisplay(int iNo)
{
for(int i=1;i<=iNo;i+=2)
{
    printf("%d",i);
}printf("\n");

}
int main()
{
int iVlaue=0;
printf("Enter number");
scanf("%d",&iVlaue);
OddDisplay(iVlaue);
    return 0;
}