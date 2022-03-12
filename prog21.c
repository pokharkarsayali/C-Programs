//
//Input:75845 5
//Output:2
//
//Input:89562 1
//Output:0

#include<stdio.h>

int DigitFrequency(int iNo,int iDigit)
{
  int i=0;
  int iCnt=0;
  if(iNo<0)
 {
   iNo=-iNo;
 }
 if((iDigit<0)||(iDigit>9))
 {
  return 0;
 }
  while(iNo>0)
{
 i=iNo%10;
if(i == iDigit)
 {
  iCnt++;
 }
iNo=iNo/10;
}
return iCnt;
}
int main()
{
  int iValue1=0,iValue2=0,iRet=0;
  
 printf("Enter number\n");
 scanf("%d",&iValue1);
printf("Enter digit that you want to search\n");
 scanf("%d",&iValue2);

 iRet=DigitFrequency(iValue1,iValue2);
 printf("Number of given digits are: %d\n",iRet);

 return 0;
}



















