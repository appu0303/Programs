#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[], int iLength, int iNo)
{

    printf("\n");

    bool bFlag = false;
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo) 
        {
          bFlag = true;
          break;
        }
    }
   return bFlag;
  
}

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
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

     bRet = Check(p, iSize, iValue);

     if(bRet == true)
     {
        printf("NO is present.\n");
     }
     else
     {
        printf("NO is not present.\n");
     }
    

    free(p);

    return 0;
}