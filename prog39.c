//Input:5
//Output:* 5 * 4 * 3 * 2 * 1


#include<stdio.h>
void Pattern4(unsigned int iNo)
{
  int iCnt=0;
  if(iNo < 0)
  {
   iNo=-iNo;
  }
 printf("\n");
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
     printf("*\t%d\t",iCnt);
  }
printf("\n"); 
}

int main()
{
  unsigned int iValue =0; 
  printf("Enter Number\n");
  scanf("%u",&iValue);
  Pattern4(iValue);
return 0;
}
