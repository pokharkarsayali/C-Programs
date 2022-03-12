//Accept number from user and check whether that number is divisible by 3 and 5.
//Input: 10
//Output: No
//
//I/p:15
//Output: Yes
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
  if(((iNo%3)==0) && ((iNo%5)==0))
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
   bool bRet=false;
  printf("Enter Number");
  scanf("%d",&iValue);

  bRet=CheckDivisible(iValue);
  if(bRet==true)
{
printf("%d is divisible by 3 and 5\n",iValue);
}
else
{
printf("%d is not divisible by 3 and 5\n",iValue);
}
 return 0;
}
