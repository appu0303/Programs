//Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display( int iNo, int Frequency)
{
    int i = 0;

    for(i = 1; i <= Frequency; i++)
    {
        printf("%d \t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}