#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{

    printf("\n");

    int iMax = Arr[0];
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {

        if(Arr[iCnt] > iMax) 
        {
    
          iMax = Arr[iCnt];
        }
        
    }

    return iMax;
  
}

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0;
   int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

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

     iRet = Maximum(p, iSize);

    printf("Maximum number is : %d.\n",iRet);


    free(p);

    return 0;
}