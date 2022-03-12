//Accept Number from user and return Multiplication of digits.



  #include<stdio.h>
  
 int MultDigit(int iNo)
 {
   int iDigit=0,iMult=1;
   if(iNo<0)
  {
    iNo=-iNo;
  }
 while(iNo > 0)
{
 iDigit = iNo % 10;
 if(iDigit!=0)
  {
    iMult=iMult * iDigit;

  }
  iNo=iNo/10;
 }
  return iMult;
 }
int main()
{
  int iValue=0;
  int iRet=0;
 printf("Enter Number");
 scanf("%d",&iValue);
iRet=MultDigit(iValue);
printf("Multiplication of digits is: %d\n",iRet);
return 0;

}

