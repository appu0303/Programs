#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        for(char cStart = ch; cStart <= 'Z'; cStart++)
        {
           printf("%c",cStart);
           printf("\n");
        }
    }
     else if((ch >= 'a')&&(ch <= 'z'))
    {
        for(char cStart = ch; cStart >= 'a'; cStart--)
        {
           printf("%c\n",cStart);
        }
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;

}