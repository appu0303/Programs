#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }

        iNo = iNo / 10;
    }
    return bFlag;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("%d contains 0 in it.\n",iValue);
    }
    else
    {
        printf("%d not contain 0 in it.\n",iValue);
    }

    return 0;
}