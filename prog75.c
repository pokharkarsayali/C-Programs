// Accept string from user and count white space from the string.



#include<stdio.h>
int CountW(char str[])
{
 int iCnt=0;
 if(str==NULL)
{
return 0;
}
while(*str!='\0')
{
  if(*str>=' ')
  {
    iCnt++;
  }
  str++;
}
return iCnt;
}

int main()
{
 char Arr[10];  
 int iRet=0;
 printf("Enter string\n");
 scanf("%[^'\n']s",Arr);
 iRet=CountW(Arr);
 printf("Frequency of white spaces is:%d\n",iRet); 

 return 0;
}
