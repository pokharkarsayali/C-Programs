//Accept N numbers frm user and Display the frequency of the
//

#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iLength,int iValue)
 {
  int i=0, iCnt=0;
 for(iCnt=0;iCnt<iLength;iCnt++)
  {
   if(Arr[i]==iValue)
    {
     iCnt++;
    }
  }
 return iCnt;
}

int main()
{
 int *arr=NULL;
 int i=0,iSize=0,iRet=0,iNo=0;

 printf("Enter Number of elements\n");
 scanf("%d",&iSize);

 arr=(int*)malloc(iSize*sizeof(int));

 printf("Enter the elements\n");
 for(i=0;i<iSize;i++)
{
 scanf("%d\n",&arr[i]);
}

 printf("Enter element that you want to search\n");
 scanf("%d",&iNo);

iRet=Frequency(arr,iSize,iNo);
printf("Frequency is: %d\n",iRet);
free(arr);
return 0;

}
  
