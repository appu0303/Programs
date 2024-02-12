#include<stdio.h>

void Display(int iNo)
{
     for(int iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number till which you want to print values\n");
    scanf("%d",&iValue);

   Display(iValue);

    return 0;
}