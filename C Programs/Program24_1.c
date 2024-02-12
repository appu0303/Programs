#include<stdio.h>
#include<stdbool.h>

bool checkAlpha(char ch)
{
    bool bFlag = false;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z' ))
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = checkAlpha(cValue);

    if(bRet == true)
    {
        printf("Given character is an alphabet.\n");
    }
    else
    {
        printf("Given character is not an alphabet.\n");
    }

    return 0;

}