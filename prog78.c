//Toggle case:
//Input:ABcD@123
//Output:abCd@123


#include<stdio.h>
void strtoggleX(char str[])
{
 if(str==NULL)
 {
   return ;
 }
while(*str!='\0')
{
 if((*str>='a')&&(*str=='z'))
 {
   *str=*str-32;
 }
else if((*str>='A')&&(*str<='Z'))
 {
   *str=*str+32;
 }
 str++;
 }
}

int main()
{
 char Arr[10];
 int iRet=0;
 printf("Enter string\n");
 scanf("%[^'\n']s",Arr);
 strtoggleX(Arr);
 printf("Updated string is :%s\n",Arr);
return 0;
}
