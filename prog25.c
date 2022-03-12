//Accept number from user and check whether the number is Palndrome or not.
//


#include<stdio.h>
#include<stdbool.h>
// Time Complexity: O(N) where N is the number of digits in the input
 
bool CheckPallindrome(int iNo)
{
 int iChk=0;
 int iDigit=0;
 
 if(iNo<0)
{
iNo=-iNo;
}
 
int iPal=iNo;
 
 while(iNo>0)
{
 iDigit=iNo%10;
  iChk=(iChk*10)+iDigit;
  iNo=iNo/10;
 }
if(iPal==iChk)
{
 return true;
}
else
{
return false;
}
}

int main()
{
 int iValue=0;
 bool bRet;
 printf("Enter Number");
 scanf("%d",&iValue);
 bRet=CheckPallindrome(iValue);

 if(bRet==true)
{
 printf("Number is Pallindrome.");
}
else
{
printf("Number is not Pallindrome.");
}
return 0;
}

