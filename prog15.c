//Accept number from user and return addition of its factors.
//Input:6
//Output:(6)  1+2+3




#include<stdio.h>
 int FactorsSum(int iNo)
 {
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
   {
    iNo=-iNo;
   }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)// Time complexity :O(N/2)
  {
    if((iNo % iCnt)==0)
   {
     iSum=iSum+iCnt;
   }
  }
 return iSum;
}

 int main()
 {
  int iValue=0;
  int iRet=0;

  printf("Enter number\n");
  scanf("%d",&iValue);
  iRet= FactorsSum(iValue);
  printf("Summation is:%d\n",iRet);

 return 0;
 }
 
