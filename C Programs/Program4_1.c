#include<stdio.h>

int MultFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int mult = 1;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            mult = mult * iCnt;
        }
    }
    return mult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors are : %d \n",iRet);

    return 0;
}