#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength, int iNo)
{

    printf("\n");
    int iProduct = 1;
   
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {

        if((Arr[iCnt] % 2 )!= 0) 
        {
    
          iProduct = iProduct * Arr[iCnt];
        }
        
    }

    return iProduct;
  
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

     iRet = Product(p, iSize, iValue);

    printf("Product is %d \n",iRet);


    free(p);

    return 0;
}