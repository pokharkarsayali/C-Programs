//Input:5 A
//Output:A A A A A

#include<stdio.h>

void Pattern(unsigned int iNo,char ch)
{
 int iCnt=0;
 printf("\n");
for(iCnt=1;iCnt<=iNo;iCnt++)
 {
   printf("%c\t",ch);
 }
 printf("\n");
}

int main()
{
 unsigned int iValue= 0;
 char cValue ='\0';

 printf("Enter Number\n");
 scanf("%u",&iValue);
 printf("Enter character\n");
 scanf(" %c",&cValue);

 Pattern(iValue,cValue);

return 0;
}
