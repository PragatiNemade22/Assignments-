//printnumber of $&* on screen 
#include<stdio.h>
 void Pattern( int iNo)
 {
 
    for (int i = 0; i < iNo; i++) 
    {
        if(i%2==0)
        {
            printf("$");
        }
        else if(i%2==1)
        {
            printf("*");
        }
        printf("\n");
    }
    
 }
int main()
{
  int ivalue =0;
  printf("Enter number");
  scanf("%d",&ivalue);

  Pattern(ivalue);
    return 0;

}