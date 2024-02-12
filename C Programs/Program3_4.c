#include<stdio.h>

void DisplayConvert(char ch)
{
    if(ch>= 65 && ch <= 90)
    {
        printf("%c\n",ch+32);
    }
    else
    {
        printf("%c\n",ch-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}