//factors in decreasing order
#include<stdio.h>
void FactRev(int iNo)
 {
    printf("Factors of %d in decreasing order: ", iNo);
    for (int i = iNo; i >= 1; i--) {
        if (iNo % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


int main()
{
 int iValue=0;

 printf("Enter number");
 scanf("%d",&iValue);
FactRev(iValue);
 

    return 0;
}