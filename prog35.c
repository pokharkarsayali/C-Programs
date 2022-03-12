//Accept Number from user print Number line.
//Input:4
//Output:-4 -3 -2 -1 0 1 2 3 4
  
 #include<stdio.h>
void NumberLine(int iNo)
{
  int iCnt=0;
  if(iNo < 0)
  {
   iNo=-iNo;
  }
 printf("\n");
  for(iCnt= -iNo;iCnt<= iNo;iCnt++)
  {
     printf("%d\t",iCnt);
  }
 printf("\n");
}

int main()
{
  int iValue1=0;
  int iRet=0; 
  printf("Enter Number\n");
  scanf("%d",&iValue1);
  NumberLine(iValue1);
return 0;
}
