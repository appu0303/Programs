#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}