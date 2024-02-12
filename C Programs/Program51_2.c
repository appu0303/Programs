#include<stdio.h>

void DisplayPattern(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
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