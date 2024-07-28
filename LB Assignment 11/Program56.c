# include<stdio.h>

 void Pattern( int iNo)
 {

     char ch ='A';
      int i =1;
       while (i<= iNo)
       {

        for(int j =1 ; j<=i ; j++)
        {
             printf("%c",ch);
        }
        printf("/n");
       }

 }
 int main()
 {
     int iValue=0;
      printf("Enter number of  elements:");
      scanf("%d",&iValue);
       pattern(iValue);
    return 0;
 }