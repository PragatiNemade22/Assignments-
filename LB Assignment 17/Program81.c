#include <stdio.h>

void Pattern(int iRow, int iCol)
 {
    int rows = 5; 
      for (int i = 0; i < rows; i++) 
      { 

         for (int j = 0; j<=i; j++) { 
            printf(" "); 
        } 
  
        
        for (int k = 0; k < rows - i; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
}
 
int main() {
    int iRow, iCol;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iRow, &iCol);

    Pattern(iRow, iCol);

    return 0;
}
// 5
//*
//**
//***
//****
//*****