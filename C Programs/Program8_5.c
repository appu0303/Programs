#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = iNo * -1;
    }
    int iSumEven = 1;
    int iSumOdd = 1;

    for(int i = 1; i <= iNo; i++)
    {
        if( i % 2 != 0)
        {
                iSumEven = iSumEven * i;
        }
        else
        {
            iSumOdd = iSumOdd * i;
        }

    }
    return  iSumOdd - iSumEven ;


}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number :\n");

    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("factorial difference of given number is : %d\n",iRet);

    return 0;
}