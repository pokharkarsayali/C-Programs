
//Accept number frm user and count number of bits which are one(1) without using % and /.

#include<stdio.h>
unsigned int CountBit(unsigned int iNo)
 {
    unsigned int iMask=0X00000001; // 1 0 1 0 0 1 0 1 
    unsigned int iResult=0;
    int iCnt=0, i=0;

    for(i=1;i<=32;i++)
    {
      iResult=iNo & iMask;
      if(iResult==iMask)
      {
        iCnt++;
      }
     iMask=iMask<<1;
    }
    return iCnt;
 } 
int main()
{
 unsigned int iValue=0, iRet=0;

 printf("Enter number\n");
 scanf("%u",&iValue);

 iRet=CountBit(iValue);
  printf("Total ON bits are:%d\n",iRet);
 return 0;
}
 
