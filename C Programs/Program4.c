//Accept one number and check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 bool check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet =FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
    return 0;
}


