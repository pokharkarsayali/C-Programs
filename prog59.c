//Accept N numbers from user and return Addition of N numbers.


#include<stdio.h>
#include<stdlib.h>
int SumElements(int Arr[],int iLength)
 {
   int i=0;
   int iSum=0;
   for(i=0;i<iLength;i++)
   {
    iSum=iSum+Arr[i];
   }
   return iSum;
 }

 int main()
{
  int *arr=NULL;
  int i=0,iSize=0,iRet=0;

 printf("Enter Number of elements\n");
 scanf("%d",&iSize);
 
 arr=(int*)malloc(iSize*sizeof(int));

 printf("Enter the elements\n");
 for(i=0;i<iSize;i++)
{
 scanf("%d\n",&arr[i]);
}

iRet=SumElements(arr,iSize);

printf("Summation of all the elements is: %d\n",iRet);
free(arr);
return 0;
}
