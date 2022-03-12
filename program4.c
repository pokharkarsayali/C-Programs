//Accept number from user and display all the numbers till that number.
//Input:8
//Output:1 2 3 4 5 6 7 8

//Input:-6
//Output:1 2 3 4 5 6

/*
START
    Accept one number as no
    If number is negative then convert it to positive
    Create one counter as Cnt and set it to 1

   Iterate till the counter is lessthan or equal to the number
     print the value of counter on screen
     Increment the value of counter by 1
    continue
END


 #include<stdio.h>
 void Display(int iNo)
{
   int iCnt=0;

   if (iNo<0)  //Input updator
  {
     iNo =-iNo;
  }
 
   //    1      2      3
  for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     printf("%d\n",iCnt);//4

   }
 }
    int main()    // Entry point function
  {
     int iValue=0;
     
     printf("Enter the number\n");
     scanf("%d",&iValue);

   Display(iValue);
   
     return 0;
  }
*/
#include<stdio.h>
 void Display(int iNo)
{
   if (iNo<0)
  {
     iNo =-iNo;
  }

   int iCnt=1;
  while(iCnt<=iNo)
 {
   printf("%d\n",iCnt);
   iCnt++;

 }
}
    int main()    // Entry point function
  {
     int iValue=0;
     
     printf("Enter the number\n");
     scanf("%d",&iValue);

   Display(iValue);
   
     return 0;
  }




















