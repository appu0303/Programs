#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a') || (*str == 'E') || (*str == 'e') || (*str == 'I') ||
         (*str == 'i') || (*str == 'O') || (*str == 'o') || (*str == 'U') || (*str == 'u'))
         {
            bFlag = true;
            break;
         }
         str++;
    }
    return bFlag;
}
int main()
{
    char arr[50];
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowel(arr);

    if(bRet == true)
    {
        printf("%s contains vowel in it.\n");
    }
    else
    {
        printf("%s  not contain vowel in it.\n");
    }

    return 0;
}