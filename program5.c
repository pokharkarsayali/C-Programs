// Accept number from user and display the addition of all numbers . 
//Input: 4
//Output: 10(1+2+3+4)


 #include<stdio.h>
 int Sum(int iNo)
{
   int iCnt=0;int iSum=0;
    if(iNo==0)
{
   return 0;
}
   if (iNo<0)  //Input updator
  {
     iNo =-iNo;
  }
 
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     iSum=iSum+iCnt;

   }
    return iSum;
 }
    int main()    // Entry point function
  {
     int iNo=0;
     int iRet=0;
     
     printf("Enter the number\n");
     scanf("%d",&iNo);
      iRet=Sum(iNo);

   printf("Addition is : %d/n",iRet);
   
     return 0;
  }
