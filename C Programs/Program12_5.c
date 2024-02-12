#include<stdio.h>
#include<stdbool.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumOdd = 0;
    int iSumEven = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }
    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0, bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CountDiff(iValue);

    printf("Difference is : %d",bRet);
}