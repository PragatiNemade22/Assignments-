#include <stdio.h>

int Frequency(int Arr[], int iLength, int x) {
    int count = 0;

    // Loop through the array
    for (int i = 0; i < iLength; i++) {
        if (Arr[i] == x ) {
            count++;
        }
    }

    return count;
}

int main() {
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
//5
//11 23 34 11 11
//3
 