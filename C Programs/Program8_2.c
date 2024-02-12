#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = iNo * 70;

    return iINR;


}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD\n");

    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d\n",iRet);

    return 0;
}