//Accept number from user and  return the smallest digit .
//Input:7521
//Output:1
//Input:56892
//Output:2
//Input:


#include<stdio.h>
#include<stdbool.h>
// Time Complexity: O(N) where N is the number of digits in the input
 
 int MinDigit(int iNo)
{
 int iMin=9;
 int iDigit=0;
 
 if(iNo<0)
{
iNo=-iNo;
}
 
 while(iNo>0)
{
 iDigit=iNo%10;
 if(iDigit<iMin)
 {
   iMin=iDigit;
  }

  iNo=iNo/10;
 }
return iMin;
}

int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter Number");
 scanf("%d",&iValue);
 iRet=MinDigit(iValue);
 
 printf("Smallest digit is :%d\n",iRet);

return 0;
}

