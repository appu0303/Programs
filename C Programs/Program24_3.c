#include<stdio.h>
#include<stdbool.h>

bool chkDigit(int iDigit)
{

    bool bFlag = false;
    if((iDigit >= 0 && iDigit <= 9) )
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;

    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter digit : \n");
    scanf("%d",&iValue);

    bRet = chkDigit(iValue);

    if(bRet == true)
    {
        printf("It is a digit.\n");
    }
    else
    {
        printf("It is not a digit.\n");
    }

    return 0;

}