// Accept number from user and display the factors in decreasing order.


#include<stdio.h>

 void Factors(int iNo)
{
 int iCnt=0;
 if(iNo<0)
 {
  iNo=-iNo;
 }
 for(iCnt=iNo/2;iCnt>=1;iCnt--)
  {
    if((iNo%iCnt)==0)
     {
       printf("%d\n",iCnt);
     }
    }
 }


int main()
{
 int iValue=0;
  int iRet=0;
  printf("Enter Number");
  scanf("%d",&iValue);
 Factors(iValue);
return 0;
}
