#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    printf("\n");
    int rem = 0;
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iSum = 0;

        while(Arr[iCnt] != 0)
        {
            rem = Arr[iCnt] % 10;

            iSum = iSum + rem;
            
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("%d\t",iSum);

    }  
    printf("\n");                                                                                             
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

   DigitsSum(p, iSize);

    free(p);

    return 0;
}