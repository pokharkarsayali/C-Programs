//Accept number from user and count even digits from that number.
//I/p:8642
//O/P: 4



#include<stdio.h>
int EvenDigits(int iNo)
{
  int iDigit=0;
  int iCnt=0;
  if(iNo<0)
 {
   iNo=-iNo;
 }
  while(iNo>0)
{
 iDigit=iNo%10;
if((iDigit%2)==0)
 {
  iCnt++;
 }
iNo=iNo/10;
}
return iCnt;
}
int main()
{
  int iValue=0;
  int iRet=0;
 printf("Enter number");
 scanf("%d",&iValue);

 iRet=EvenDigits(iValue);
 printf("Number of even digits are: %d",iRet);

 return 0;
}

