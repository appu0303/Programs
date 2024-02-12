#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;
    
    if(iNo >= 1 )
    {
        iFact = iFact  * iNo;
        iNo--;
        Factorial(iNo);
    }
    return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of the %d is : %d\n",iValue,iRet);

    return 0;
}


