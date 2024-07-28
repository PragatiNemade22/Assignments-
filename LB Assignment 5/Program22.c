//print untill thhat number

#include<stdio.h>

void Display(int iNo)
{ for(int i = 1; i <= iNo; i++)
{
    printf("%d",iNo);
}

}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//OUTPUT
//5
//1 2 3 4 5 