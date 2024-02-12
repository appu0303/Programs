#include<stdio.h>
#include<stdbool.h>

void CountChar(char *str,char ch)
{
    int iCnt = 1;
   while(*str != '\0')
   {
    if(*str == ch)
    {
        printf("%d\n",iCnt);
       break;
    }
    str++;
    iCnt++;
   }
  
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

     CountChar(arr,cValue);

    \

    return 0;
}