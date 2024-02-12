#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str,char ch)
{
    bool bFlag = false;
   while(*str != '\0')
   {
    if(*str == ch)
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
    char cValue;
    bool bRet = false;

    printf("Enter the String : \n");
   // scanf("%[^'\n']s",arr);
    gets(arr);

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    bRet = CheckChar(arr,cValue);

    if(bRet == true)
    {
        printf("Character fount.\n");
    }
    else
     {
        printf("Character not fount.\n");
    }

    return 0;
}