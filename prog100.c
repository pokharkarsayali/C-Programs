//Accept number and one position frm user and ON the bit of that location if its OFF.
//Input:Number=10
//    Position=4
// New Number=10

 #include<stdio.h>
 #include<stdbool.h>
unsigned int OnBit(unsigned int iNo,int iPos)
 {
    unsigned int iMask=0X00000001;
    unsigned int iResult=0;
   if((iPos<1)||(iPos>32))
   {
    return false;
   }
  iMask=iMask<<(iPos-1);
  iResult=iNo| iMask;
  return iResult;
 } 
int main()
{
 unsigned int iValue=0,iPos=0,iRet=0;

 printf("Enter number\n");
 scanf("%u",&iValue);
 printf("Enter Position\n");
 scanf("%d",&iPos);
 iRet=OnBit(iValue,iPos);
  printf("New Number is:%u\n",iRet);
 return 0;
}

