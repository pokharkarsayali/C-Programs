//Accept number frm user as well as  position 

 #include<stdio.h>
 #include<stdbool.h>
 /*

0000 0000 0000 0000 0000 0000 0000 0001 
  0    0    0    0    0    0    0    1

*/

 bool CheckBit(unsigned int iNo,int iPos)
 {
  unsigned int iMask=0X00000001;
  unsigned int iResult=0;
  if((iPos<1)||(iPos>32))
  {
    return false;
  }
  iMask=iMask<<(iPos-1);

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
 unsigned int iValue=0,iPos=0;
 bool bRet;
 printf("Enter number\n");
 scanf("%u",&iValue);

 printf("Enter Position\n");
 scanf("%u",&iPos);
  bRet=CheckBit(iValue,iPos);
 if(bRet==true)
 {
  printf("Bit is on\n");
 }
 else
 {
  printf("Bit is off\n");
 }
return 0;
}

