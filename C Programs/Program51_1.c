#include<stdio.h>

void DisplayPattern(int iNo)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayPattern(iNo);
    }
    //printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}