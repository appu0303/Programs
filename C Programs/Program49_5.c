#include<stdio.h>

int Product(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;
    if(iNo != 0 )
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;

        Product(iNo);
    }
    return iMult;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Product(iValue);
    printf("Product of the digits is : %d\n",iRet);

    return 0;
}


