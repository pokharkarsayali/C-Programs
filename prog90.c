//Accept number from user and return count of ON(1) bits.
//
//

#include<stdio.h>
 int CountOne(unsigned int iNo)
 {
   int iCnt=0;
  unsigned int iDigit=0;

  while(iNo>0)
  {
   iDigit=iNo%2;
   if(iDigit==1)
   {
    iCnt++;
   }
   iNo=iNo/2;
  }
return iCnt;
 } 
int main()
{
 unsigned int iValue=0;
 int iRet=0;
 printf("Enter number\n");
 scanf("%u",&iValue);

iRet= CountOne(iValue);
printf("Number of ON bits are :%d\n",iRet);
return 0;
}
