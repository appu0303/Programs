#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;
   while(*str != '\0')
   {
    if(*str == ch)
    {
       iCnt++;
    }
    str++;
   }
   return iCnt;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter the String : \n");
   // scanf("%[^'\n']s",arr);
    gets(arr);

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Count is : %d\n",iRet);

    return 0;
}