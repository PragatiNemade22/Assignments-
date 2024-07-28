#include <stdio.h>

int Frequency(int Arr[], int iLength) {
    int even_count = 0;
    int odd_count = 0;

   
   
    for (int i = 0; i < iLength; i++) {
        if (Arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    
    
    return even_count - odd_count;
}

int main() {
    int iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL) {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: ", iSize);

    for (int iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Difference between even and odd frequencies: %d\n", iRet);

    free(p);

    return 0;
}

//7
//85 66 3 80 93 88 90
//1 (4-3)