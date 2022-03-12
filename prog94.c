//
//Accept number frm user and toggle the third bit of the number.



#include<stdio.h>
// 0000 0000 0000 0000 0000 0000 0000 0100 
//  0     0    0   0    0     0    0    4

 unsigned int ToggleBit(unsigned int iNo)
 {
  unsigned int iMask=0X00000004;

  unsigned int Result=0;
  Result=iNo ^ iMask;
  
 return Result;
 } 
int main()
{
 unsigned int iValue=0;
 int iRet=0;
 printf("Enter number\n");
 scanf("%u",&iValue);

 iRet= ToggleBit(iValue);

 printf("Number after updation :%d\n",iRet);
 return 0;
}

