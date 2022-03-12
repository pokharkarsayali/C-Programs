//Program 23 by for loop


#include<stdio.h>

 int Reverse(int iNo)
{
  int iRev=0;
int iDigit=0;
 if(iNo<0)
 {
   iNo=-iNo;
 }
  for( ;iNo>0;iNo=iNo/10)
{
  iDigit=iNo%10;
  iRev=(iRev*10)+iDigit; 
}
return iRev;
}


 int main()
{
  int iValue=0;
  int iRet=0;
 printf("Enter Number");
 scanf("%d",&iValue);
iRet=Reverse(iValue);
printf("Reverse number is: %d\n",iRet);
return 0;
}
