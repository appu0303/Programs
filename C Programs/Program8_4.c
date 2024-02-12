#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = iNo * -1;
    }
    int iSum = 1;

    for(int i = 1; i <= iNo; i++)
    {
        if( i % 2 != 0)
        {
                iSum = iSum * i;
        }
    }
    return iSum;


}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number :\n");

    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of given number is : %d\n",iRet);

    return 0;
}