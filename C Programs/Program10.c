//Accept number from user and check whether the number is even on odd

#include<stdio.h>
#include<stdbool.h>

bool checkEvenOdd(int iNo)
{
    if((iNo % 2 == 0 ))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
 

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = checkEvenOdd(iValue);

    if( bRet == true)
    {
        printf("%d is an even number\n",iValue);
    }

else  {
        printf("%d is an odd number\n",iValue);
    }
    return 0;
}