#include<stdio.h>
#include<stdbool.h>

bool checkAlpha(char ch)
{
    bool bFlag = false;
    if((ch >= 'a' && ch <= 'z') )
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
        printf("It is small case character.\n");
    }
    else
    {
        printf("It is not a small case character.\n");
    }

    return 0;

}