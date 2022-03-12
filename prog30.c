
//


  #include<stdio.h>

int Difference(int iNo)
 {
    int iCnt=0;
    int iSum1=0,iSum2=0;
    int iDiff=0;

    if(iNo<0)
   {
    iNo=-iNo;
   }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if((iNo % iCnt)==0)
   {
    iSum1=iSum1+iCnt ;
   }
   else
    {
      iSum2=iSum2+iCnt;
    }
   }
   return iSum1-iSum2;
}
 int main()
{
  int iValue=0;
  int iRet=0;
 printf("Enter Number");
 scanf("%d\n",&iValue);
iRet=Difference(iValue);
printf("Difference is %d\n",iRet);
 return 0;
}






