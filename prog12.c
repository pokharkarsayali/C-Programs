//Accept number from user and return its factorial.
//Input:5
//Output:5*4*3*2*1   (120)
//       1*2*3*4*5   (120)

#include<stdio.h>
 int Fact(int iNo)
 {
    int iCnt=0;
    int iMult=1;
    if(iNo < 0)
   {
    iNo=-iNo;
   }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
      iMult=iMult*iCnt;
    } 
    return iMult;
 }
 int main()
 {
  int iValue=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);
  iRet=Fact(iValue);
  printf("Result is :%d",iRet);

 return 0;
 }
 


