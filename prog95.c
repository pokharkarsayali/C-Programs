//Accept number frm user and check whether the 5th bit of that number is ON.

#include<stdio.h>
#include<stdbool.h>
/*

   iNo=   0 0 0 1 0 0 1 0
   iMask= 0 0 0 1 0 0 0 0
             &
 iResult= 0 0 0 1 0 0 0 0
*/

 bool CheckBit(unsigned int iNo)
 {
  unsigned int iMask=0X00000010;
  unsigned int iResult=0;
  iResult=iNo & iMask;
  if(iResult==iMask)
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
 unsigned int iValue=0;
 bool bRet;

  printf("Enter number\n");
 scanf("%u",&iValue);

 if(bRet==true)
 {
  printf("5th bit is on\n");
 }
 else
 {
  printf("5th bit is off\n");
 }

 return 0;
}

