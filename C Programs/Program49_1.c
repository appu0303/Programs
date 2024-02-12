#include<stdio.h>

void DisplayPattern(int iNo)
{
    
    if(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        iNo--;
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