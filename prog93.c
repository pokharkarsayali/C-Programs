//Mask Designing 
//Accept number frm user and off the 3rd bit and 7th bit  of the number and return the modified number.


#include<stdio.h>
// 1111 1111 1111 1111 1111 1111 1011 1011 
//  F     F    F   F     F    F    B   B

unsigned int OffBit(unsigned int iNo)
 {
  unsigned int iMask=0XFFFFFFBB;

  unsigned int Result=0;
  Result=iNo & iMask;
  
 return Result;
 } 
int main()
{
 unsigned int iValue=0;
 int iRet=0;
 printf("Enter number\n");
 scanf("%u",&iValue);

 iRet= OffBit(iValue);

 printf("Number after updation :%d\n",iRet);
 return 0;
}

