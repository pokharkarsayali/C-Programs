//Accept string frm user and diplay it in reverse order.[Time Complexity of this prog is 2N.]
//Input:abcde
//Output:edcba

#include<stdio.h>

void Display(char str[])
{
 int iCnt=0;
 if(str==NULL)
 {
  return;
 }
 while(*str!='\0')
 {
  iCnt++;
  str++;
 }
  str--;
  while(iCnt>0)
  {
    printf("%c",*str);
    iCnt--;
    str--;
  }
 printf("\n");
}
int main()
{
 char Arr[10];
 int iRet=0;
 printf("Enter string\n");
 scanf("%[^'\n']s",Arr);
 Display(Arr);
 return 0;
}

