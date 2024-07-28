#include <stdio.h>

int Frequency(int Arr[], int iLength, int x) {
    int count = 0;
    int iLength =0;

    
    for (int i = 0; i < iLength; i++) {
        if (Arr[i] == 11) {
            count++;
        }
    }

    return count;
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0,iRet=0;
    int *p = NULL;
    int iLength =0;
    

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: ", iLength);

    for (iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &p[iCnt]);

    iRet = Frequency(p, iSize,iLength);

    printf("%d",iRet);

    free(p);

    return 0;
}
//5
//11 23 34 11 11
//3
 