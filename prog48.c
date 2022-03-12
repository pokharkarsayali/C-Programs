//Input: Row=4 ,Column=4

#include<stdio.h>

void Pattern(unsigned int iRow,unsigned iCol)
{
  int i=0,j=0;
 for(i=1;i<=iRow;i++)
  {
    for(j=1;j<=iCol;j++)
    {
     if(i==j)
      {
       printf("%d\t",i);
      }
     else if(i>j)
     {
      printf("*\t");
     }
    else
    {
     printf("$\t");
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
