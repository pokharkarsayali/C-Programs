  
  // Accept 2 numbers from user and return the minimum and maximum number.
   /*
Algorithm for maximum:
   START
   Accept first number as no1
   Accept second number as no2
   
   if no1 is greater than no2
   then no1 is maximum
   otherwise 
   no2 is maximum
  STOP
*/
//include the user defined file
# clearinclude"header2.h"

   int main()
  {
    int iNo1=0;
    int iNo2=0;
    int iRet=0;
    printf("Enter first number");
    scanf("%d",&iNo1);
   
     printf("Enter second number");
    scanf("%d",&iNo2);

 iRet= Maximum(iNo1,iNo2);

 printf("Maximum Number is : %d\n",iRet);


  return 0;
  }

