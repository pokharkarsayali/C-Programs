// Accept string from user and copy by converting small characters into capital characters.


#include<stdio.h>

void strcpyX(const char src[],char dest[]) // when you do this in company then using const (data type qualifier).
{
if(src==NULL || dest==NULL)
{
 return;
}
while(*src!='\0')
{
   if((*src>='a')&&(*src<='z'))
   {
     *dest=*src-32; 
   }
 else
{
 *dest=*src;
}
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
 printf("Orignal String is:%s\n",arr);
 printf("After copy string is:%s\n",brr);

 return 0;
}
