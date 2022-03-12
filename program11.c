//1.Write a program which accept one number from user and print that number of even numbers on screen.
//Input : 7
//Output: 2 4 6 8 10 12 14
//
  #include<stdio.h>

void PrintEven(int iNo)
{
 int iCnt=0;
  int iSum=0;
if(iNo <= 0)
{
return;
}

 for(iCnt=0;iCnt<=100;iCnt++)
  {
    if((iCnt%2)==0)
   {
    printf("%d\n",iCnt);
    }
  }
}

int main()
{
 int iValue = 0;

 printf("Enter Number\n");

 scanf("%d",&iValue);

 PrintEven(iValue);

return 0;
}
