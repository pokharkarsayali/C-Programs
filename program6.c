//Accept number from user and check whether that number is even or odd.
//Input: 4
//Output: Its even
//
//
//
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if(iNo%2==0)
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

  bRet=CheckEven(iValue);
  if(bRet==true)
{
printf("%d is even number\n",iValue);
}
else
{
printf("%d is odd number\n",iValue);
}
 return 0;
}
