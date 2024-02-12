#include<stdio.h>

int Max(int iNo)
{
    int iDigit  = 0;
    static int iMax = 0;

   if(iNo != 0) 
   {
    iDigit = iNo % 10;

    if(iDigit > iMax)
        iMax = iDigit;
        
    iNo = iNo / 10;

    Max(iNo);
}
    return iMax;
}


int main()
{
    int iRet = 0, length = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Max(iValue);
    printf("Largest Digit is : %d\n",iRet);

    return 0;
}


