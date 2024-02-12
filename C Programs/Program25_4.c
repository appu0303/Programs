#include<stdio.h>
#include<stdbool.h>

bool checkSpecial(char ch)
{
    bool bFlag = false;
    if(((ch == ' ') || (ch >= '!') && (ch <= '/')) || ((ch >= ':') && (ch <= '@')) || ((ch >= '[') && (ch <= '`')) || ((ch >= '{') && (ch <= '~'))) 
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

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    bRet = checkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a Special symbol.\n");
    }
    else
    {
        printf("It is not a special symbol.\n");
    }

    return 0;

}