//Input:Row=4,Column=4
/*
Output:
       *
     * *
   * * *
 * * * *

44 43 42 41 
34 33 32 31
24 23 22 21 
14 13 12 11
*/

#include<stdio.h>

void Pattern(unsigned int iRow,unsigned int iCol)
{
  int i=0,j=0;
 if(iRow!=iCol)
 {
   return;
  }

 for(i=iRow;i>=1;i--)
  {
    for(j=1;j<=iCol;j++)
    {
     if(i<=j)
      {
       printf("*\t");
      }
     else
     {
       printf(" \t");
     }

   }
  printf("\n");
 }
}

int main()
{
 unsigned int iValue1= 0,iValue2=0;
 
 printf("Enter number of rows\n");
 scanf("%u",&iValue1);
 printf("Enter number of columns\n");
 scanf(" %u",&iValue2);

 Pattern(iValue1,iValue2);

return 0;
}

