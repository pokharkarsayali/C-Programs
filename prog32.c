//Input:89451
//Output:8 (9-1)
//Input:5672
//Output:5(7-2)

#include<stdio.h>

int MaxMin(int iNo)
{
 int iMax=0;
  int iMin=9;
  int iDigit=0;
  int i=0, s=0;
  if(iNo<0)
 {
   iNo=-iNo;
 }
  while(iNo>0)
{
 iDigit=iNo%10;
 if(iDigit>iMax)
 {
  iMax=iDigit;
 }
 if(iDigit<iMin)
 {
   iMin=iDigit;
 }
iNo=iNo/10;
}
return iMax-iMin;
}

int main()
{
int iValue=0;
int iRet=0;
printf("Enter Number");
scanf("%d",&iValue);
iRet=MaxMin(iValue);

printf("Difference is:%d\n",iRet);
return 0;
}
