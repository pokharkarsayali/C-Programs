//Displaying Ascii table


#include<stdio.h>

void DisplayASCII()
{
 int i=0;
 printf("--------------------------------\n");
 printf("ASCII Table\n");
 printf("--------------------------------\n");
 for(i=0;i<=128;i++)                          //half of 255
 {
  printf("%c\t%d\t%o\t%x\n",i,i,i,i);
 }
 printf("--------------------------------\n");
}
int main()
{
 DisplayASCII();
 return 0;
}
