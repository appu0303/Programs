#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char iDivision)
{
    if(iDivision == 'A')
    {
        printf("Your exam is at 7 AM.\n");
    }
    else if(iDivision == 'B')
    {
        printf("Your exam is at 8:30 AM.\n");
    }
    else if(iDivision == 'C')
    {
        printf("Your exam is at 9:20 AM.\n");
    }
    else if(iDivision == 'D')
    {
        printf("Your exam is at 10:30 AM.\n");
    }
    else
    {
        printf("Invalid Division.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}