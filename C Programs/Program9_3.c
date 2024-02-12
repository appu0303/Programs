#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iResult = 0;

    iResult = iNo * 1000;

    return iResult;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance:\n");
    scanf("%d",&iValue);


    iRet = KMtoMeter(iValue);

    printf("%d Kilometer is %d in meter\n",iValue,iRet);

    return 0;
}