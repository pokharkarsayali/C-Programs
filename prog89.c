//
//Accept number from user and convert that number in to binary and display.
//Input:43
//Output:1 1 0 1 0 1

#include<stdio.h>
void DisplayBinary(unsigned int iNo)
 {
  unsigned int iDigit=0;
  while(iNo>0)
  {
   iDigit=iNo%2;
   printf("%u\t",iDigit);
   iNo=iNo/2;
  }
 } 
int main()
{
 unsigned int iValue=0;
 
 printf("Enter number\n");
 scanf("%u",&iValue);

 DisplayBinary(iValue);
return 0;
}
