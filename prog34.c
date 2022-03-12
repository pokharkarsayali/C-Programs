//
  #include<stdio.h>

 int Frequency(int iNo)
{
  int iCnt=0;
  int iDigit=0;
 while(iNo>0)
 {
  iDigit=iNo%10;
  if(iDigit>=3)&&(iDigit<=7))
   {
    iCnt++;
   }
  iNo=iNo/10;
  
 }
 return iCnt;
}

int main()
{
 int iValue=0;
int=0;
printf("Enter Number");
scanf("%d",&iValue);
 iRet=Frequency(iValue);
printf("Frequency is: %d\n",iRet);
return 0;
} 
 
