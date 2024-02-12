#include<stdio.h>
#include<stdbool.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
           iCnt++;
        }

        iNo = iNo / 10;
    }
    return iCnt;

}

int main()
{
    int iValue = 0, bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CountOdd(iValue);

    printf("%d contains %d odd digits.\n",iValue,bRet);
   
    return 0;
}