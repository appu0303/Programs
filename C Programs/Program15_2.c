#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{

    printf("\n");
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {

        if(Arr[iCnt] == iNo) 
        {
    
          return iCnt;
        }
        
    }

    return -1;
  
}

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0;
   int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \t");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    printf("Enter %d elements : \n\n",iSize);

    for(iCnt = 0;  iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

     iRet = FirstOcc(p, iSize, iValue);

     if(iRet == -1)
     {
        printf("There is no such member.\n");
     }
     else
     {
        printf("First occurance of no is on: %dth index\n",iRet);
     }


    free(p);

    return 0;
}