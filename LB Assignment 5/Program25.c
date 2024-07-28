//print all odd no up tu n
#include<stdio.h>
void MultiplesDisplay(int iNo)
{
for(int i=1;i<=iNo;i++)
{
    int multiply =i*iNo;
    {
        printf("%d",multiply);
    }
    printf("/n");
}


}
int main()
{
int iVlaue=0;
printf("Enter number");
scanf("%d",&iVlaue);
MultiplesDisplay(iVlaue);
    return 0;
}
//4
//4 8 12 16 20