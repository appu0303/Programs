#include<stdio.h>

void DisplayPattern(int iNo)
{
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch++);
        iCnt++;
        DisplayPattern(iNo);
    }
    //printf("\n");
}


int main()
{
   static int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}