#include<stdio.h>

void Divisible(int Arr[],int iLength)
{
  for(int i= 0 ;i<iLength;i++)
{
    if(Arr[i]%5 ==0)
    {
        printf("%d",Arr[i]);
    }
    
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

    printf("Enter %d elements: ",iSize);

    for (iCnt = 0; iCnt < iLength; iCnt++)
     {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter elements:%d",iCnt+1);
    scanf("%d", &p[iCnt]);
    Display(p, iSize );

   

    free(p);

    return 0;
}
//OUTPUT
//6
//85 66 3 80 93 88
//85 80