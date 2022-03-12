//Accept number frm user as well as  position and toggle that bit at that position.

#include<stdio.h>
#include<stdbool.h>
// 0000 0000 0000 0000 0000 0000 0000 0001 
//  0     0    0   0    0     0    0    1

 unsigned int ToggleBit(unsigned int iNo,int iPos)
 {
    unsigned int iMask=0X00000001;
    unsigned int iResult=0;
   if((iPos<1)||(iPos>32))
   {
    return false;
   }
  iMask=iMask<<(iPos-1);

  iResult=iNo ^ iMask;
  
    return iResult; 
 } 
int main()
{
 unsigned int iValue=0,iPos=0;
 bool iRet;
 printf("Enter number\n");
 scanf("%u",&iValue);

 printf("Enter Position\n");
 scanf("%u",&iPos);
  iRet=ToggleBit(iValue,iPos);
  printf("Updated Number is:\n",iRet);
return 0;
}



