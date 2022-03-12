//Accept number from user and  return the largest digit .
//Input:7521
//Output:7
//Input:56892
//Output:9


#include<stdio.h>
#include<stdbool.h>
// Time Complexity: O(N) where N is the number of digits in the input
 
 int MaxDigit(int iNo)
{
 int iLarg=0;
 int iDigit=0;
 
 if(iNo<0)
{
iNo=-iNo;
}
 
 while(iNo>0)
{
 iDigit=iNo%10;
 if(iDigit>iLarg)
 {
   iLarg=iDigit;
  }

  iNo=iNo/10;
 }
return iLarg;
}

int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter Number");
 scanf("%d",&iValue);
 iRet=MaxDigit(iValue);
 
 printf("Largest digit is :%d\n",iRet);

return 0;
}

