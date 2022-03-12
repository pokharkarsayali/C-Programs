//Input:5
//Output:* # * # * # * # * #
//Input:7
//Output:* # * # * # * # * # * # * #

#include<stdio.h>

void Pattern2(unsigned int iNo)
{
  int iCnt=0;
  if(iNo < 0)
  {
   iNo=-iNo;
  }
 printf("\n");
  for(iCnt= 1;iCnt<= iNo;iCnt++)
  {
     printf("*\t#\t");
  }
printf("\n"); 
}

int main()
{
  unsigned int iValue =0; 
  printf("Enter Number\n");
  scanf("%u",&iValue);
  Pattern2(iValue);
return 0;
}
