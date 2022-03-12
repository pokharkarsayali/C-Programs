//Accept Marks from user and display the result.  
//Input: 35
//Output: pass
//
//Input: 65
//Output: First class
//
/////////////////////////////////////////////////////////////////////////
/*

 0 to 35     Fail
 35 to 50   Pass Class
 50 to 60   Second Class
 60 to 70   First Class
 70 to 100   Distinction


*/
#include<stdio.h>


 void CheckResult(int iMarks)
{
  if((iMarks<0)||(iMarks > 100))//Input Filter
  {
   printf("Invalid Marks\n");
   return;
  }
  
   if((iMarks>=0)&&(iMarks<35))
  {
    printf("You are failed\n");
   }
  else if((iMarks>=35)&&(iMarks<50))
  {
   printf("Pass Class");
  }
  else if((iMarks>=50)&&(iMarks<60))
 {
  printf("Second Class\n");
 }
 else if((iMarks>=60)&&(iMarks<70))
 {
  printf("First Class\n");
  }
  else
 {
   printf("Distinction\n");
 }
}
int main()
{
  int iValue=0;
  
  printf("Enter your marks\n");
  scanf("%d",&iValue);
   
  CheckResult(iValue);

 return 0;
}
