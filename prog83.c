// Accept string from user and copy .

#include<stdio.h>

void strcpyX(char src[],char dest[])
{
if(src==NULL || dest==NULL)
{
 return;
}
while(*src!='\0')
{
  *dest=*src;
  src++;
  dest++;
}
 *dest='\0';
}

int main()
{
 char arr[20];
 char brr[20];

 printf("Enter string\n");
 scanf("%[^'\n']s",arr);

 strcpyX(arr,brr);//srtcpyX(100,200)

 printf("After copy string is:%s\n",brr);

 return 0;
}
