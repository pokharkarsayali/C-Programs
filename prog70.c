// Accept string frm user and return length of that string. 

#include<stdio.h>

 int strlenX(char str[])
{
int iCnt=0;

 while(*str!='\0')
 {
   //only to understand why we are using scanf instead of fgets => printf("%d:%c:%d\n",iCnt,*str,*str);
   iCnt++;
   str++;
   
 }
return iCnt;
}

int main()
{
 char Arr[10];
 int iRet=0;
 printf("Enter your name\n");
// scanf("%[^'\n']s",Arr);
 fgets(Arr,10,stdin);            //fgets(kashat,kiti,kuthun) Hello
 
 iRet=strlenX(Arr);
 printf("String length is:%d\n",iRet);

 return 0;
}

