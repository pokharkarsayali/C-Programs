// Accept string frm user and count capital characters from the string.



#include<stdio.h>
int CountCap(char str[])
{
 int iCnt=0;
 if(str==NULL)
{
return 0;
}
while(*str!='\0')
{
  if((*str>='A')&&(*str<='Z'))
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
 iRet=CountCap(Arr);
 printf("Frequency of capital characters is:%d\n",iRet); 

 return 0;
}
