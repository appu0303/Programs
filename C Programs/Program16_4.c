#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    printf("\n");
    int rem = 0;
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iCount = 0;
        int iNo = Arr[iCnt];
        while(Arr[iCnt] != 0)
        {
            rem = Arr[iCnt] % 10;

            iCount++;
            
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        if(iCount == 3)
        {
            printf("%d\n",iNo);
        }
    }                                                                                               
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

   Digits(p, iSize);

    free(p);

    return 0;
}