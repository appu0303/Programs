//Accept one number from user and print that number of * on screen
#include<stdio.h>

void Display(int iNo)
    {
        int iCnt = 0;
        while(iNo>iCnt)
        {
            printf("*\t");
            iCnt++;

        }
        printf("\n");
    }

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}