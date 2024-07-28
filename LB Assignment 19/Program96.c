#include<stdio.h>

int Difference(int Arr[],int iLength)
{
    int i =0;
int even_sum=0; 
int odd_sum =0;

for(int i= 0 ;i<iLength;i++)
{
    if(Arr[i]%2 ==0)
    {
        even_sum+=Arr[i];
    }
    else 
    {
        odd_sum+=Arr[i];
    }
    return even_sum -odd_sum;
}
}
int main()
{
int iSize = 0, iRet = 0, iCnt = 0;
int iLength =0;
    int *p = NULL;
    

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: ",iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
     {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter elements:%d",iCnt+1);
    scanf("%d", &p[iCnt]);

    iRet = Difference(p, iSize );

    printf("Result is %d",iRet);

    free(p);

    return 0;
}