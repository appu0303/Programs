#include<stdio.h>
#include<stdbool.h>

int CountRange(int iNo)
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

        if(iDigit > 3 && iDigit < 7)
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

    bRet = CountRange(iValue);

    printf("%d contains %d digits in between 3 & 7.\n",iValue,bRet);
   
    return 0;
}