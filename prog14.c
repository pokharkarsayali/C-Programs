// Time complexity:O(N/2)
// Example:Accept number from user and display its factors.
// by making N/2 in the loop we are reducing time complexity by half
//Whereever there is loop in the program there time complexity comes->(for,while,do while).
//Data Structures and algorithms made easy_ by Kurumunchi FOR complexity concept.


#include<stdio.h>
 void Factors(int iNo)
 {
    int iCnt=0;
    if(iNo<0)
   {
    iNo=-iNo;
   }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)// Time complexity :O(N/2)
   {
    if((iNo % iCnt)==0)
   {
     printf("%d\n",iCnt);
   }
 }
}

 int main()
 {
  int iValue=0;

  printf("Enter number\n");
  scanf("%d",&iValue);
  Factors(iValue);

 return 0;
 }
 
