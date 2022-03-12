//Input:5
//Output:1 * 2 * 3 * 4 * 5 *
//Input:3
//output:1 * 2 * 3 * 



#include<stdio.h>

void Pattern3(unsigned int iNo)
{
  int iCnt=0;
  if(iNo < 0)
  {
   iNo=-iNo;
  }
 printf("\n");
  for(iCnt= 1;iCnt<= iNo;iCnt++)
  {
     printf("%d\t*\t",iCnt);
  }
printf("\n"); 
}

int main()
{
  unsigned int iValue =0; 
  printf("Enter Number\n");
  scanf("%u",&iValue);
  Pattern3(iValue);
return 0;
}
