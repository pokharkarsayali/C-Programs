//Accept number frm user and check whether 3rd,5th and 7th bit  is on or off.

 #include<stdio.h>
 #include<stdbool.h>
 /*

   iNo=   0 0 0 1 0 0 1 0
   iMask= 0 0 0 1 0 0 0 0
             &
 iResult= 0 0 0 1 0 0 0 0

0000 0000 0000 0000 0000 0000 0101 0100 
  0    0    0    0    0    0    5    4

*/
 
 bool CheckBit(unsigned int iNo)
 {
  unsigned int iMask=0X00000054;
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
  printf("3rd,5th,7th bit is on\n");
 }
 else
 {
  printf("Bits are off\n");
 }

 return 0;
}

