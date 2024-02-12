#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{

int iCnt = 0;
    printf("\n");

    int iLastOcc = -1;
   
   
    for( iCnt = 0; iCnt < iLength; iCnt++)
    {

        if(Arr[iCnt] == iNo) 
        {
            iLastOcc = iCnt;    
        }
        
    }

    if(iLastOcc)
        return iLastOcc;
    if(iLastOcc == 0)
        return iLastOcc;
    else
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

     iRet = LastOcc(p, iSize, iValue);

     if(iRet == -1)
     {
        printf("There is no such member.\n");
     }
     else
     {
        printf("Last occurance of no is on: %dth index\n",iRet);
     }


    free(p);

    return 0;
}